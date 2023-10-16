#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Rand(void) {
	int num = rand() % 6 + 1;
	return num%6+1;
}

int main(void) {
	srand((unsigned int)time(NULL));

	int (*math)();
	math = Rand;
	printf("%d\n", math);

	return 0;
}