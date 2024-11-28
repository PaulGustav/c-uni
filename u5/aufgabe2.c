#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palindrom(int input) {
	int original = input, turned = 0, r;

	while (input != 0) {
		r = input % 10;
		turned = turned * 10 + r;
		input /= 10;
	}

	return original == turned;
}

int main() {
	int zahl;

	printf("Bitte eine Zahl eingeben: ");

	if (scanf("%d", &zahl) != 1) {
		fprintf(stderr, "Fehler: Eingabe ist keine Zahl!\n");
		exit(EXIT_FAILURE);
	}

	if (is_palindrom(zahl)) {
		printf("%d ist ein Zahlenpalindrom.\n", zahl);
	} else {
		printf("%d ist kein Zahlenpalindrom.\n", zahl);
	}

	return EXIT_SUCCESS;
}
