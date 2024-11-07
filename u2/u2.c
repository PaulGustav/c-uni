#include <stdio.h>

void a1() {
	printf("\nAufgabe 1\n");
	printf("a) %f\n", (float) 5/2);
	printf("b) %f\n", (float) (5/2));
	printf("c) %d\n", (8/5.)/2);
	printf("d) %lf\n", (8/5)/2.);
	printf("e) %d\n", (50/4)%2);
	printf("f) %d\n", (50%4)/2);
	printf("g) %d\n", 50%(4/2));
}

void a2() {
	printf("\nAufgabe 2\n");
	double beta = 3.2;
	printf("a) %f\n", beta);
	
	int x = 25 / 5;
	printf("b) %d\n", x);

	int alpha, delta;
	alpha = 5;
	delta = 1;
	alpha -= delta;
	printf("c) %d\n", alpha);

	int gamma = 7;
	printf("d) %d\n", gamma);

	int y, z;
	y = 3;
	z = 3 * y + x;
	printf("e) %d\n", z);

	int a, b, c;
	c = 2;
	b = 4;
	a = 3*b*4/c;
	printf("f) %d\n", a);
}

int main() {
	a1();
	a2();
	return 0;
}
