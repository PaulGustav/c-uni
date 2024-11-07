#include <stdio.h>
#include <math.h>

int main() {
	double pi = M_PI;
	double area;

	printf("***DURCHMESSER EINES KREISES DURCH DEN FLÄCHENINHALT***\n");
	printf("Bitte Flächeninhalt des Kreises angeben: ");
	scanf("%lf", &area);

	double diameter = sqrt(area/pi)*2;
	printf("Der Durchmesser des Kreies beträgt: %f Einheiten\n", diameter);
	return 0;
}
