#include <stdio.h>
#include "poly.h"

int main()
{
	rational x = { 1, 10 };
	int t = 10;
	int i;
	float result = 0.0;
	for (i = 1; i <= t; i++)
	{
		result = dev_lim_ln(x, t);
	}
		printf("Le developement limite de ln(1+x) en 0 avec x=%d/%d est %f\n", x.p, x.q, result);

	getchar();
	return 0;
}
