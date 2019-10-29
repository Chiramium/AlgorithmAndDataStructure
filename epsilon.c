#include <stdio.h>
#include <float.h>

int main()
{
	float e1 = 1.0;
	double e2 = 1.0;

	while ((float)1.0 + e1 != (float)1.0) {
		e1 = e1 / (float)2.0;
	}

	while (1.0 + e2 != 1.0) {
		e2 = e2 / 2.0;
	}

	printf("e1 = %.30f   :   FLT_EPSILON = %.30f\n", e1, FLT_EPSILON);
	printf("e2 = %.30f   :   DBL_EPSILON = %.30f\n", e2, DBL_EPSILON);
}