#include <stdio.h>
#include <stdlib.h>

int main() {
	char start_letter, end_letter;
	int start_digit, end_digit;

	printf("Bitte Anfangsbuchstabe eingeben: ");
	scanf("%c", &start_letter);
	getchar();
	printf("Bitte Endbuchstaben eingeben: ");
	scanf("%c", &end_letter);
	getchar();

	printf("Bitte Anfangszahl eingeben: ");
	scanf("%d", &start_digit);
	printf("Bitte Endzahl eingeben: ");
	scanf("%d", &end_digit);

	int letter_count = end_letter - start_letter + 1;
	int digit_count = end_digit - start_digit + 1;

	char letters[letter_count];
	int numbers[digit_count];

	if (end_digit < start_digit) {
		fprintf(stderr, "Fehler: Endzahl ist kleiner als Startzahl!\n");
		exit(EXIT_FAILURE);
	}

	for (int n = 0; n < letter_count; n++) {
		letters[n] = start_letter + n;
	}

	for (int n = 0; n < digit_count; n++) {
		numbers[n] = start_digit + n;
	}

	for (int i=0; i < letter_count; i++) {
		for (int n=0; n < digit_count; n++) {
			printf("(%c, %d) ", letters[i], numbers[n]);
		}

		printf("\n");
	}

	return (EXIT_SUCCESS);
}
