#include <stdio.h>

int main() {
	printf("int: %lu\n", sizeof(int));
	printf("unsigned int: %lu\n", sizeof(unsigned int));
	printf("signed int: %lu\n", sizeof(signed int));
	printf("short int: %lu\n", sizeof(short int));
	printf("long int: %lu\n", sizeof(long int));
	printf("unsigned short int: %lu\n", sizeof(unsigned short int));
	printf("unsigned long int: %lu\n", sizeof(unsigned long int));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));

	return 0;
}
