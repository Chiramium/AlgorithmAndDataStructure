#include <stdio.h>

#define N 500000000

int main(int argc, char **argv)
{
	int i;
	double s1 = 0.0;
	double s2 = 0.0;
	double c;
	double t, y;

	for (i = 0; i < N; i++) {
		s1 += 0.1;
	}

	//Kahan's Algorithm
	c = 0.0;
	for (i = 0; i < N;i++) {
		y = 0.1 - c;
		t = s2 + y;
		c = (t - s2) - y;
		s2 = t;
		printf("t = %23.15lf\n", t);
	}

	printf("Simple = %23.15lf\n", s1);
	printf("Kahan = %23.15lf\n", s2);

	return 0;
}