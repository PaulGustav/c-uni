#include <stdio.h>
#include <stdlib.h>

int main() {
	int gz;
	printf("Bitte eine positive Ganzzahl eingeben: ");
	if (scanf("%d", &gz) != 1) {
		fprintf(stderr, "Fehler: Ungültige Eingabe!\n");
		exit(EXIT_FAILURE);
	}

	if (gz < 0) {
		fprintf(stderr, "Fehler: Zahl muss positiv sein!\n");
		exit(EXIT_FAILURE);
	}

	printf("Ungerade Zahlen aufsteigend: ");
	for (int n=0; n < gz; n++) {
		if (n % 2 != 0) {
			printf("%d ", n);
		}
	}

	printf("\n");

	printf("Gerade Zahlen absteigend: ");
	for (int n = gz; n > 0; n--) {
		if (n % 2 == 0) {
			printf("%d ", n);
		}
	}
	
	printf("\n");
	return 0;
}
