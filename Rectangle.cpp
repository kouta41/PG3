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
	printf("�ʐς�%0.f\n", area);
}