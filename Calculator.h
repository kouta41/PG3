#pragma once
template <class Type1, class Type2, class Type3 = Type1>

class Calculator
{
public:
	Calculator(Type1 count,Type2 index):count(count), index(index){}

	Type3 Min() {
		return count < index ? static_cast<Type3>(count) : static_cast<Type3>(index);
	}

private:
	Type1 count;
	Type2 index;
};

