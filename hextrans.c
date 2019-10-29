#include  <stdio.h>

int main(void)
{
	double x = -12.3456; // -123456 = 0xfffe1dc0
	unsigned char *p;
	int i, j;
	int v[4];

	p = (unsigned char *)&x;
	printf("%02x %02x %02x %02x %02x %02x %02x %02x\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4), *(p + 5), *(p + 6), *(p + 7));

	return 0;
}