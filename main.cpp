#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


typedef void(*math)(int *);


void Ran(int a) {
	srand((unsigned int)time(NULL));
	a = rand() % 6 + 1;
}

void Ok(int *a) {
	printf("当たり\n");
}
void No(int *a) {
	printf("はずれ\n");
}

void SetTime(math m,int second) {
	Sleep(second * 1000);
	m(&second);
}

int main(void) {

	char chr1;
	
	math m;

	m = Ran;
	printf("抽選結果 = %d\n",m);

	printf("数字1~6を入力せよ\n");

	scanf_s("%c", &chr1);
	if ((int)m == chr1) {
		m = &Ok;
		SetTime(m, 3);
	}
	else {
		m = &No;
		SetTime(m, 3);
	}


	return 0;
}