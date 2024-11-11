#include <stdio.h>

int main() {
	char z;

	printf("\nBitte ein Zeichen eingeben: ");
	scanf("%c", &z);
	getchar();

	if (z < 127 && z > 122 || z < 96 && z > 90 || z < 65 && z > 57 || z < 48) {
		printf("\n%c ist ein Sonderzeichen.\n", z);
	}
	else if (z < 123 && z > 96) {
		printf("\n%c ist ein Kleinbuchstabe.\n", z);
	}
	else if (z < 91 && z > 64) {
		printf("\n%c ist ein Großbuchstabe.\n", z);
	} else {
		printf("\n%c ist eine Ziffer.\n", z);
	}

	return 0;
}
