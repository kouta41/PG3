#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	area = width * height;
}

void Rectangle::Draw()
{
	printf("面積は%0.f\n", area);
}