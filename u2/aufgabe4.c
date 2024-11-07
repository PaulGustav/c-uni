#include <stdio.h>

int main() {
	char z1, z2;
	printf("Bitte das erste Zeichen eingeben: ");
	scanf("%c", &z1);
	getchar();
	printf("Bitte das zweite Zeichen eingeben: ");
	scanf("%c", &z2);

	if (z1 < z2) {
		printf("In der ASCII-Tabelle kommt %c vor %c.\n", z1, z2);
	}
	else {
		printf("In der ACII-Tabelle kommt %c vor %c.\n", z1, z2);
	}

	return(0);
}
