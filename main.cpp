#include <stdio.h>
#include "Calculator.h"

int main(void) {
	
	Calculator<int, float> IntAndFloat(12, 11.0f);
	printf("%d\n", IntAndFloat.Min());

	Calculator<int, double> IntAndDouble(11, 10.0f);
	printf("%f\n", IntAndDouble.Min());

	Calculator<float, int> FloatAndInt(14.0f, 12);
	printf("%f\n", FloatAndInt.Min());

	Calculator<float, double> FloatAndDouble(10.0f, 11);
	printf("%f\n", FloatAndDouble.Min());

	Calculator<double, int> DoubleAndInt(14, 11);
	printf("%f\n", DoubleAndInt.Min());

	Calculator<double, float> DoubleAndFloat(29, 70);
	printf("%f\n", DoubleAndFloat.Min());

	return 0;
}