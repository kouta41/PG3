#include <stdio.h>

float Start = 1;
float End = 0;

float CalculationRecursive(float recursiveMoney,float workTime) {
	printf("%0.0fの時給:%0.0f円\n", Start++, recursiveMoney);
	End = recursiveMoney + End;

	recursiveMoney = recursiveMoney * 2 - 50;
	
	if (Start > workTime) {
		return End;
	}


	return (CalculationRecursive(recursiveMoney, workTime));
}


float add(float recursiveMoney, float hourlywage) {
	return recursiveMoney * hourlywage;
}


int main(void) {
	float recursiveMoney = 100.0f;
	float hourlywage = 1072.0f;
	float workTime = 7.0f;

	printf("%0.0f時間勤務の場合\n", workTime);
	printf("\n再帰的な賃金体制\n合計:%0.0f円\n", CalculationRecursive(float(recursiveMoney), float(workTime)));

	printf("\n一般的な賃金体制\n合計:%0.0f円\n", add(float(hourlywage), float(workTime)));

	return 0;
}