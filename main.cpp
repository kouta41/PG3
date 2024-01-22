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


int main() {

	//ダイスの出目
	std::function<void(int number)> result = [&](int number) {

		// どちらも同じ数なから正解
		if (number % 2 == 0) {
			printf("出目:丁\n");
		}
		else if (number % 2 == 1) {
			printf("出目:半\n");
		}
	};

	//ダイスを振る
	std::function<int()> dice = [&]() {
		int result = rand() % 6 + 1;
		return result;
	};

	//回答
	int number;
	//答え
	int answer;


	while (true) {
		//ダイスリセット
		char str = time(nullptr);
		srand(str);

		printf("\n半は:1,丁は:2\n\n");
		printf("予想:");
		scanf_s("%d", &number);

		answer = SetTimeout(dice);
		result(answer);

		//結果
		if (answer % 2 == 0 && number == 2) {
			printf("結果:勝ち\n");
		}
		else if (answer % 2 == 1 && number == 1) {
			printf("結果:勝ち\n");
		}
		else {
			printf("結果:負け\n");
		}
	}
	return 0;
}