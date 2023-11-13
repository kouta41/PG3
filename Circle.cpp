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
	printf("面積は%0.f\n", area);
}