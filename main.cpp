#include <stdio.h>
#include <thread>

void text1(int num1) {
	printf("thread %d\n", num1);
}

void text2(int num2) {
	printf("thread %d\n", num2);
}

void text3(int num3) {
	printf("thread %d\n", num3);
}

int main() {
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	std::thread th1(text1,num1);
	th1.join();
	
	std::thread th2(text2,num2);
	th2.join();

	std::thread th3(text3,num3);
	th3.join();

	return 0;

}