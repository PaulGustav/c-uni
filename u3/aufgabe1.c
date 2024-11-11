#include <stdio.h>

int main() {
	int input;
	printf("\nBitte eine Zahl eingeben: ");
	scanf("%d", &input);

	if (input != 0) {
		if (input > 0) {
			printf("Die Eingabe ist eine positive Zahl.\n");
		} else {
			printf("Die Eingabe ist eine negative Zahl.\n");
		}
	} else {
		printf("Die Eingabe ist gleich 0.\n");
	}
	return 0;
}
