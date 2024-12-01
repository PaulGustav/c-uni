#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrom(char input[], size_t size) {
	char lower[size];
	
	for (int i = 0; input[i] != '\0'; i++) {
		lower[i] = input[i] + 32;
	}

	lower[size] = '\0';
	
}

int main() {
	char input[255];
	size_t size = sizeof(input);

	printf("Bitte Text eingeben: ");
	fgets(input, size, stdin);
	input[strcspn(input, "\n")] = '\0';

	is_palindrom(input, size);

	return 0;
}
