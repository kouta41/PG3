#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>

//三秒待つ
int SetTimeout(std::function<int()> dice) {
	Sleep(3000);
	return dice();
}

//判断する機構
std::function<void(int temp)> result = [&](int temp) {
	
	// どちらも同じ数なから正解
	if (temp % 2 == 0) {
		printf("出目:丁\n");
	}
	else if (temp % 2 == 1) {
		printf("出目:半\n");
	}
};

//ダイスを振る
std::function<int()> dice = [&]() {
	int result = rand() % 6 + 1;
	return result;
};


int main() {

	//回答
	int temp;
	//答え
	int answer;


	while (true) {
		//ダイスリセット
		char str = time(nullptr);
		srand(str);

		printf("\n半は=1,丁は=2\n\n");
		printf("予想:");
		scanf_s("%d", &temp);

		answer = SetTimeout(dice);
		result(answer);

		if (answer % 2 == 0 && temp == 2) {
			printf("勝ち\n");
		}
		else if (answer % 2 == 1 && temp == 1) {
			printf("勝ち\n");
		}
		else {
			printf("負け\n");
		}
	}
	return 0;
}