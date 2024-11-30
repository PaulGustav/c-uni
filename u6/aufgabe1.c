#include <stdio.h>

int main() {
	float array[10];
	float average, max, min;

	for (int i = 0; i < 10; i++) {
		float q;
		printf("Eingabe %d: ", i + 1);
		scanf("%f", &q);
		array[i] = q;
	}

	for (int i = 0; i < 10; i++) {
		average += array[i];
	}

	average /= 10;
	min = array[0];
	max = array[0];

	for(int i = 1; i < 10; i++) {
		if (array[i] < min) {
			min = array[i];
		}

		if (array[i] > max) {
			max = array[i];
		}
	}

	printf(
		"\n"
		"Maximalwert: %.2f\n"
		"Minimalwert: %.2f\n"
		"Durchschnittswert: %.2f\n",
		max, min, average
	);

	return 0;
}
