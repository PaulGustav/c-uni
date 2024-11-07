#include <stdio.h>

int main() {
	int day, week;
	printf("Bitte Anzahl der Tage eingeben: ");
	scanf("%d", &day);

	printf("%d Woche(n)\n", day / 7);
	return 0;
}
