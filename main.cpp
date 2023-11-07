#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


typedef int(*result)(char, int);


int dice(char str, int Time) {
	srand((unsigned int)time(NULL));
	str = rand() % 6 + 1;
	return str;
}

int correct(char str, int time) {
	return printf("当たり\n");
}
int error(char str, int time) {
	return printf("はずれ\n");
}

int SetTime(result temp, int second) {
	Sleep(second * 1000);
	temp(second, second);

	return 0;
}

int main(void) {
	char str = 0;
	char text = 0;

	int input = 0;
	int time = 1;

	result temp;
	//int (*m)(char,int);
	temp = dice;


	printf("抽選結果 = %d\n", temp(str, time));
	input = temp(str, time);
	printf("丁は=0,半は=1\n");

	scanf_s("%c", &text);

	if (input == 2 || input == 4 || input == 6) {
		if (text == 48) {
			temp = correct;
			SetTime(temp, time);
		}
		else {
			temp = error;
			SetTime(temp, time);
		}
	}
	else if (input == 1 || input == 3 || input == 5) {
		if (text == 49) {
			temp = correct;
			SetTime(temp, time);
		}
		else {
			temp = error;
			SetTime(temp, time);
		}
	}

	return 0;
}