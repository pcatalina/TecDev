#include "devlimln.h"

int main()
{
	//test limit development function
	rational x = { 1, 10 };
	int t = 10;
	int k;
	float result;
	for (k = 0; k <= t; k++)
	{
		result = dev_lim_ln(x, k);
		printf("ln_deg_%d=%f\n", k, result);
	}

	printf("Le developement limite de ln(1+x) en 0 avec x=%d/%d est %f\n", x.p, x.q, result);
	printf("ln_math=%f", log(1.1));

	getchar();
	return 0;
}
