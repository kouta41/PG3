#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
	Rectangle();
	~Rectangle();

	void Size() override;
	void Draw() override;
private:
	float width = 5.0f;
	float height = 3.0f;
	float area;
};