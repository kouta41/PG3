#include <stdio.h>


template <typename Type>
Type Min(Type a, Type b) {

	if (a < b) {
		printf("%f,%f,%lf\n", a);
		return static_cast<Type>(a);
	}
	printf("%d,%f,%lf\n", b);
	return static_cast<Type>(b);
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return 0;
}

int main(void) {


	Min<int>(614, 514);
	Min<float>(114.0f, 514.0f);
	Min<double>(1114, 90);
	Min<char>(114, 514);
}