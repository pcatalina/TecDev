#include <stdio.h>
#include "poly.h"

int main()
{
	rational r[4] = { { 3, 2 }, { 4, 7 }, { 5, 6 }, { 1, 3 } };
	polynome p = {r,3};
	affiche_polynome(&p);
	printf("\n");

	rational x = { 1, 10 };
	float result = dev_lim_ln(x);
	printf("Le developement limite de ln(1+x) en 0 avec x=%d/%d est %f\n", x.p, x.q, result);

	getchar();
	return 0;
}


