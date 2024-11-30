#include <stdio.h>
#include <string.h>

int main() {
	char text[255], turned[255];

	printf("Bitte Text eingeben: ");
	fgets(text, sizeof(text), stdin);
	text[strcspn(text, "\n")] = '\0';

	for (int i = 0; i < 255; i++) {
		turned[i] = text[254 - i];
	}

	printf("Rückwärts:\n%s", turned);

	return 0;
}
