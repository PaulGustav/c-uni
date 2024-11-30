#include <stdio.h>
#include <string.h>

int main() {
	char text[255], turned[255];

	printf("Bitte Text eingeben: ");
	fgets(text, sizeof(text), stdin);
	text[strcspn(text, "\n")] = '\0';

	size_t length = strlen(text);

	for (int i = 0; i < length; i++) {
		turned[i] = text[length - i - 1];
	}

	turned[length] = '\0';

	printf("Rückwärts:\n%s\n", turned);

	return 0;
}
