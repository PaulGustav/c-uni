#include <stdio.h>
#include <ctype.h>

#define MAXCHARS 300

int main() {
	char text[MAXCHARS];
	int count = 0;
	int word_count = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (count < MAXCHARS) {
			text[count++] = c;
		}

		if (c == ' ' || c == '\n') {
			word_count++;
		}
	}

	printf("Wortanzahl: %d\n", word_count);

	return 0;
}
