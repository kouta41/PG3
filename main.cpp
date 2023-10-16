#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

void Rand(void) {
	int num = rand() % 10 + 1;
	printf("%d\n", num);
}

int main(void) {
	void (*math)();
	math = Rand;
	printf("%p", *math);

	int num = rand() % 10 + 1;
	printf("%d\n", num);

	math();

	return 0;
}