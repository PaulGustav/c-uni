#include <stdio.h>

void a1() {
	printf("Aufgabe 1:\n");
	printf("a) %d\n", (8/5)/2);
	printf("b) %f\n", (8/5)/2);
	printf("c) %i\n", 8/(5/2));
}

void a2() {
	printf("Aufgabe 2:\n");
	long int weltbevoelkerung = 7300000000;
	printf("a) Hello Alien, we are almost %ld people on earth!\n", weltbevoelkerung);

	int tage = 360;
	printf("b) %d Tage sind %d Wochen\n", tage, tage / 7);

	double zahl;
	printf("c) Bitte eine Fließkommazahl eingeben: ");
	scanf("%lf", &zahl);
	printf("Ihre Zahl lautet %f\n", zahl);
}

int main() {
	a1();
	a2();
	return 0;
}
