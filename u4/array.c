#include <stdio.h>

int main() {
	char array[3][7] = {"Selim", "Julius", "Janis"};
	for (int i=0; i < 3; i++) {
		printf("%s ist ein guter Mitarbeiter der Deka!\n", array[i]);
	}
	return 0;
}
