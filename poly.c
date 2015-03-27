#include "poly.h"

polynome* new_polynome(int deg)
{
	polynome* new_poly = (polynome*)malloc(sizeof(polynome));
	int i;
	new_poly->coef = (rational*)malloc(sizeof(rational));

	for (i = 0; i <= deg; i++)
	{
		new_poly->coef[i] = new_rational(0, 1);
	}
	new_poly->deg = deg;

	return (new_poly);
}

polynome* set_coef_polynome(rational c, int d)
{
	polynome* new_poly = new_polynome(K);
	new_poly->coef[d] = c;

	return new_poly;
}

rational get_coef_polynome(polynome* poly, int d)
{
	return (poly->coef[d]);
}

int get_degree_polynome(polynome* poly)
{
	int deg = 0;
	int i;
	for (i = 0; i < poly->deg - 1; i++)
	{
		if (rational_to_int(poly->coef[i]) < rational_to_int(poly->coef[i + 1]))
			deg = i + 1;
	}

	return deg;
}

float eval_polynome(polynome* poly, rational x0)
{
	int i;
	float result_poly = 0.0;
	for (i = 0; i <= poly->deg; i++)
	{
		poly->coef[i] = mult_rational(poly->coef[i], power_rational(x0, i));
		result_poly += (float)rational_to_int(poly->coef[i]);
	}

	return result_poly;
}

void affiche_polynome(polynome* poly)
{
	int i;
	for (i = 0; i <= poly->deg; i++)
	{
		if (i == 0)
			printf("(%d/%d) + ", poly->coef[i].p, poly->coef[i].q);
		else if (i == 1)
			printf("(%d/%d)x + ", poly->coef[i].p, poly->coef[i].q);
		else if (i == poly->deg)
			printf("(%d/%d)x^%d", poly->coef[i].p, poly->coef[i].q, i);
		else
			printf("(%d/%d)x^%d + ", poly->coef[i].p, poly->coef[i].q, i);
	}
}

float dev_lim_ln(rational x)
{
	int i;
	float result = 0.0;
	float y = 0.0;
	float power_one = 1.0;
	float power = 0.0;
	for (i = 1; i <= T; i++)
	{
		power_one = (float)(rational_to_float(power_rational(int_to_rational(-1), (i + 1))));
		power = (rational_to_float(power_rational(x, i)));
		result += power_one*power / (float)(i);
		printf("result_deg_%d=%f\n", i, result);
	}
	
	double result_library = log((double)1 + (double)rational_to_float(x));
	printf("result_math_library=%f\n", result_library);
	return result;
}