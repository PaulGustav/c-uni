#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_palindrom(char input[]) {
	int length = strlen(input);

	char lower[length + 1];
	char turned[length + 1];

	
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] > 40 && input[i] < 91) {
			lower[i] = input[i] + 32;
		} else {
			lower[i] = input[i];
		}
	}

	lower[length] = '\0';

	for (int i = 0; lower[i] != '\0'; i++) {
		turned[i] = lower[length - i - 1];
	}
	
	turned[length] = '\0';

	for (int i = 0; i < length; i++) {
		if (turned[i] != lower[i]) {
			return false;
		}
	}

	return true;
	
}

int main() {
	char input[255];
	size_t size = sizeof(input);

	printf("Bitte Text eingeben: ");
	fgets(input, size, stdin);
	input[strcspn(input, "\n")] = '\0';

	if (is_palindrom(input)) {
		printf("'%s' ist ein Palindrom.\n", input);
	} else {
		fprintf(stderr, "'%s' ist kein Palindrom.\n", input);
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}
