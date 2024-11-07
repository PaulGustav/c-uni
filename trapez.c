#include <stdio.h>

double trapez() {
	double os, us, h, flaeche;

	printf("Oberseite:\n");
	scanf("%lf", &os);
	printf("Unterseite:\n");
	scanf("%lf", &us);
	printf("Höhe:\n");
	scanf("%lf", &h);

	flaeche = (os + us) * h / 2;
	return flaeche;
}

int main() {
	printf("Trapez Fläche = %.2lf\n", trapez());
	return 0;
}

