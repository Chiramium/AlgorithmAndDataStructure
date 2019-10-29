/*
	桁落ちテストプログラム
*/
#include <stdio.h>

int main(int argc, char **argv)
{
	double a = 1.23456;
	double b = 1.23442;
	double c;

	c = a - b;

	printf("a = %13.10f\n", a);
	printf("b = %13.10f\n", b);
	printf("c = %13.10f\n", c);

	return 0;
}