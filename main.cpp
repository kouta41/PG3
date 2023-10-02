#include <stdio.h>


template <typename Type>
Type Min(Type a, Type b) {

	if (a < b) {
		return a;
	}
	return b;
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}

int main(void) {
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(114.0f, 514.0f));
	printf("%lf\n", Min<double>(114, 514));
	printf("%c\n", Min<char>(114, 514));
}