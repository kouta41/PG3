#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


typedef int(*result)(char, int);


int dice(char a,int b) {
	srand((unsigned int)time(NULL));
	a = rand() % 6 + 1;
	return a;
}

int correct(char a, int b) {
	return printf("当たり\n");
}
int error(char a, int b) {
	return printf("はずれ\n");
}

int SetTime(math m,int second) {
	Sleep(second * 1000);
	m(second,second);

	return 0;
}

int main(void) {
	char chr1 = 0;
	char chr2 = 0;
	int chr3 = 0;

	int k = 0;
	int no = 1;
	
	result temp;
	//int (*m)(char,int);

	 = dice;

	
	printf("抽選結果 = %d\n",m(chr1,no));
	k = m(chr1, no);
	printf("偶数は=0,奇数は=1\n");

	scanf_s("%c", &chr2);
	chr3 = chr2;
	printf("chr2=%d\n", chr2);
	printf("k=%d\n", k);

	if (k == 2 || k == 4 || k == 6) {
		if (chr2 ==48) {
			m = correct;
			SetTime(m, no);
		}
		else {
			m = error;
			SetTime(m, no);
		}
	}
	else if(k == 1 ||k == 3 || k == 5) {
		if (chr2 == 49) {
			m = correct;
			SetTime(m, no);
		}
		else {
			m = error;
			SetTime(m, no);
		}
	}
	/*else {
		m = No;
		SetTime(m, no);
	}*/


	return 0;
}