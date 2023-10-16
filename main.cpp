#include <stdio.h>


template <typename Type>
Type Min(Type a, Type b) {

	if (a < b) {
		return static_cast<Type>(a);
	}
	return static_cast<Type>(b);
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}

int main(void) {
	int a = 614; int b = 514;
	float c = 114.0f; float d = 514.0f;
	double e = 1114; double f = 90;
	char g = 114; char h = 514;

	printf("%d\n", Min<int>(a, b));
	printf("%0.0f\n", Min<float>(c, d));
	printf("%0.0lf\n", Min<double>(e, f));
	Min<char>(g, h);

	return 0;
}