#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Ran(void) {
	srand((unsigned int)time(NULL));
	int m = rand() % 6 + 1;
	printf("%d\n", m);
}

int main(void) {

	void(*math)();

	math = Ran;


	math();
	printf("\n", *math);


	return 0;
}