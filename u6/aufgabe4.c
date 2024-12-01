#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrom(char input[]) {
	size_t size = sizeof(input);

	
}

int main() {
	char input[255];

	printf("Bitte Text eingeben: ");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';

	return 0;
}
