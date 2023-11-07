#pragma once
#include "Cry.h"


class Dog :public Cry {
public:
	Dog();
	~Dog();

	void Move() override;
};