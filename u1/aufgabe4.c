#include <stdio.h>
#include <math.h>

int main() {
	double pi, height, radius;
	pi = M_PI;
	
	printf("***BERECHNUNG DES VOLUMENS EINES ZYLINDERS***\n");
	printf("\nBitte die Höhe des Zylinders eingeben: ");
	scanf("%lf", &height);

	printf("Bitte den Radius des Zylinders eingeben: ");
	scanf("%lf", &radius);

	printf("Das Volumen des Zylinders beträgt: %.3f Einheiten!\n", pi * pow(radius, 2) * height);
	return 0;
}
