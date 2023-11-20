#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>

	void SetTimeout() {
		Sleep(3000);
	}
	std::function<void(int, int)> result = [&](int p, int temp) {
		int text = p % 2;
		int input = temp % 2;
		SetTimeout();

		// どちらも同じ数なら正解
		if (input == text) {
			printf("当たり\n\n");
		}
		else {
			printf("はずれ\n\n");
		}
	};

	std::function<int()> dice = [&]() {
		int result = rand() % 6 + 1;
		return result;
	};


int main() {


	



	//回答
	int temp;
	while (true) {
		char str = time(nullptr);
		srand(str);

		printf("丁は=0,半は=1\n\n");
		printf("予想:");
		scanf_s("%d", &temp);
		result(dice(), temp);

	}

	return 0;
}