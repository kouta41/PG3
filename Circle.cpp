#include "Circle.h"


Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::Size()
{
	area = radius * radius * 3.14f;
}

void Circle::Draw()
{
	printf("ñ êœÇÕ%0.f\n", area);
}