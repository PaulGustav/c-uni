#include <stdio.h>
#include <stdlib.h>

void spaces(int length, int width, int row) {
	while (length < (width - row) / 2) {
		printf(" ");
		length++;
	}
}

int main() {
	int width;

	printf("Breite des Dreiecks angeben: ");

	if (scanf("%d", &width) != 1) {
		fprintf(stderr, "Fehler: Bitte eine Zahl eingeben!\n");
		exit(EXIT_FAILURE);
	}

	if (width == 1) {
		exit(EXIT_FAILURE);
	}

	int r = width % 3;

	for (int n = 0; n < width; n += 2) {

		int l1 = 0, l2 = 0, s = 0;

		spaces(l1, width, n);
		
		while (s < n + 1 + r) {
			printf("*");
			s++;
		}

		spaces(l1, width, n);

		printf("\n");
	}

	return EXIT_SUCCESS;
}
