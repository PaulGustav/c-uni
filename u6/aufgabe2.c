#include <stdio.h>
#include <string.h>

int main() {
	char text[255];
	char character;
	int count = 0;

	printf("Bitte Text eingeben: ");
	fgets(text, sizeof(text), stdin);
	text[strcspn(text, "\n")] = '\0';

	printf("Bitte einen Buchstaben eingeben: ");
	scanf(" %c", &character);

	for (int c = 0; text[c] != '\0'; c++) {
		if (text[c] == character) {
			count += 1;
		}
	}

	printf("Der Buchstabe %c kommt %d mal vor.\n", character, count);

	return 0;
}
