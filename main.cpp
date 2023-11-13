#include <stdio.h>
#include "Calculator.h"

int main(void) {
	Calculator<int, float> IntAndFloat(12, 11.0f);
	Calculator<int, double> IntAndDouble(11, 10);
	Calculator<float, int> FloatAndInt(14.0f, 12);
	Calculator<float, double> FloatAndDouble(10.0f, 11);
	Calculator<double, int> DoubleAndInt(14, 11);
	Calculator<double, float> DoubleAndFloat(29, 70.0f);
	

	printf("%d\n", IntAndFloat.Min());
	printf("%d\n", IntAndDouble.Min());
	printf("%f\n", FloatAndInt.Min());
	printf("%f\n", FloatAndDouble.Min());
	printf("%f\n", DoubleAndInt.Min());
	printf("%f\n", DoubleAndFloat.Min());

	return 0;
}