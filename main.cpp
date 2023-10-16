#include <stdio.h>

float e = 1;
float d = 0;

float Recursive(float a,float c) {
	printf("%0.0fの時給:%0.0f円\n",e++, a);
	d = a + d;

	a = a * 2 - 50;
	
	if (e > c) {
		return d;
	}


	return (Recursive(a,c));
}


float add(float a, float b) {
	return a * b;
}


int main(void) {
	float a = 100.0f;
	float b = 1072.0f;
	float c = 8.0f;

	printf("%0.0f時間勤務の場合\n", c);
	printf("\n再帰的な賃金体制\n合計:%0.0f円\n", Recursive(float(a), float(c)));

	printf("\n一般的な賃金体制\n合計:%0.0f円\n", add(float(b), float(c)));

	return 0;
}