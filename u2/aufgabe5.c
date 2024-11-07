#include <stdio.h>

int main() {
	int z, n;

	printf("Bitte die erste Zahl eingeben: ");
	scanf("%d", &z);
	printf("Bitte die zweite Zahl eingeben: ");
	scanf("%d", &n);

	if (n%z==0) {
		printf("%d ist ein Teiler von %d.\n", z, n);
	}
	else {
		printf("%d is leider kein Teiler von %d.\n", z, n);
	}
	return 0;
}
