#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int a,int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int main(void) {
	int l = 114;
	int h = 514;

	int(*calc)(int,int);

	calc = add;
	printf("%d\n",calc(l,h));

	calc = sub;
	printf("%d\n",calc(l,h));

	return 0;
}