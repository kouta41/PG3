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
	printf("–ÊÏ‚Í%f\n", area);
}