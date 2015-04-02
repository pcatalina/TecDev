#include "poly.h"

polynome* new_polynome(int deg)
{
	polynome* new_poly = (polynome*)malloc(sizeof(polynome));
	int i;
	new_poly->coef = (rational*)malloc(deg*sizeof(rational));

	for (i = 0; i <= deg; i++)
	{
		new_poly->coef[i] = new_rational(0, 1);
	}
	new_poly->deg = deg;

	return (new_poly);
}

void set_coef_polynome(rational c, int d, polynome* poly)
{
	poly->coef[d] = c;
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
		if (rational_to_int(poly->coef[i])!=0)
			deg = i + 1;
	}

	return deg;
	
}

float eval_polynome(polynome* poly, rational x0)
{
	int i;
	float result_poly=0.0;
	rational x0_power;
	for (i = 0; i <= poly->deg; i++)
	{
		x0_power = power_rational(x0, i);
		poly->coef[i] = mult_rational(poly->coef[i], x0_power);
		result_poly += rational_to_float(poly->coef[i]);
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
	printf("\n");
}


