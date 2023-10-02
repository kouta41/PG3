#include <stdio.h>


float Recursive(float a,float b) {
	printf("%0.0fの時給:%0.0f円\n",b, a);
	a = a * 2 - 50;
	if (b <= 0) {
		return a;
	}

	return (Recursive(a,(b-1)));
}



int main(void) {
	float a = 100.0f;
	float b = 8;

	Recursive(float(a), float(b));

	return 0;
}