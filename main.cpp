#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>

int main() {

	std::function<void(int, int)> result = [&](int p, int answer) {
		int dice = p % 2;
		int anticipation = answer % 2;
		Sleep(3000);

		printf("回答:");

		// 偶数なら丁
		if (dice == 0) {
			printf("丁\n");
		}// 奇数なら半
		else if (dice != 0) {
			printf("半\n");
		}

		// どちらも同じ数なら正解
		if (anticipation == dice) {
			printf("結果:正\n\n");
		}
		else {
			printf("結果:誤\n\n");
		}
	};

	// サイコロを決定
	int currentTime = time(nullptr);
	srand(currentTime);

	std::function<int()> dice = [&]() {
		int result = rand() % 6 + 1;
		return result;
	};


	// 予想
	int answer;

	printf("丁( 2 )、半( 1 )選べ\n\n");
		printf("丁( 2 )、半( 1 )を入力\n");
		printf("予想:");
		scanf_s("%d", &answer);

		result(dice(), answer);

	return 0;
}