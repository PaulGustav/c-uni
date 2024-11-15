#include <stdio.h>

int main() {
	int numbers[5] = {1, 2, 3, 4, 5};
	char letters[4] = {'a', 'b', 'c', 'd'};

	for (int i=0; i < 4; i++) {
		for (int n=0; n < 4; n++) {
			printf("(%c, %d),\n", letters[i], numbers[n]);
		}
	}

	return 0;
}
