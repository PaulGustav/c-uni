#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
	printf("\nBitte einen Großbuchstaben eingeben: ");
	scanf("%c", &c);
	getchar();

	if (c < 41 || c > 90) {
		fprintf(stderr, "Fehler: Kein Großbuchstabe!\n");
		exit(EXIT_FAILURE);
	} else {
		printf("Die Buchstaben nach %c sind:\n", c);
		for (int i = c + 1; i < 91; i++) {
			printf("%c ", i);
		}
		printf("\n\n");
		return EXIT_SUCCESS;
	}
}
