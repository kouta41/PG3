﻿#include <stdio.h>
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

	math();

	int num = rand() % 10 ;
	printf("%d\n", num);


	return 0;
}