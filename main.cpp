#include <stdio.h>


float Recursive(float a,float b) {
//	printf("%0.0fの時給:%0.0f円\n",b, a);
	a = a * 2 - 50;
	if (b <= 0) {
		return a;
	}

	return (a+Recursive(a,(b-1)));
}

float add(float a, float b) {
	return a * b;
}


int main(void) {
	float a = 100.0f;
	float b = 1072.0f;
	float c = 8;

	printf("%0.0f時間勤務の場合\n", c);
	printf("\n再帰的な賃金体制\n合計:%0.0f円\n", Recursive(float(a), float(c)));

	printf("\n一般的な賃金体制\n合計:%0.0f円\n", add(float(b), float(c)));

	return 0;
}