#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>

int main() {

	std::function<void(int, int)> result = [&](int p, int temp) {
		int text = p % 2;
		int input = temp % 2;
		Sleep(3000);

		// どちらも同じ数なら正解
		if (input == text) {
			printf("当たり\n\n");
		}
		else {
			printf("はずれ\n\n");
		}
	};

	
	char str = time(nullptr);
	srand(str);

	std::function<int()> dice = [&]() {
		int result = rand() % 6 + 1;
		return result;
	};


	//回答
	int temp;


	printf("丁は=0,半は=1\n\n");
		printf("予想:");
		scanf_s("%d", &temp);

		result(dice(), temp);
	

	return 0;
}