#include "devlimln.h"

float dev_lim_ln(rational x, int t)
{
	polynome* poly_dev_ln = new_polynome(t);
	rational one = int_to_rational(1);
	rational neg_one = int_to_rational(-1);
	int i;
	rational j;
	for (i = 1; i <= t; i++)
	{
		if ((i % 2) == 0)
		{
			j = new_rational(1, i);
			j = mult_rational(neg_one, j);
			set_coef_polynome(j, i, poly_dev_ln);
		}
		else
		{
			j = new_rational(1, i);
			j = mult_rational(one, j);
			set_coef_polynome(j, i, poly_dev_ln);
		}
	}
	
	return eval_polynome(poly_dev_ln, x);
}