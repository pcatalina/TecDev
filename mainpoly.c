#include "poly.h"

int main()
{
	//test polynome functions
	int i, j;
	rational r = { 5, 2 };
	rational x0 = new_rational(1, 2);
	int deg_poly = 4;
	polynome* poly = new_polynome(deg_poly);
	rational rPoly;
	rational r3;
	int degPoly = get_degree_polynome(poly);

	for (i = 1; i <= degPoly; i++)
	{
		r3 = new_rational(1, i);
		set_coef_polynome(r3, i, poly);
		affiche_polynome(poly);
	}

	for (j = 0; j <= degPoly; j++)
	{
		rPoly = get_coef_polynome(poly, j);
		printf("coef_deg_%d=(%d/%d)\n", j, r.p, r.q);
	}

	affiche_polynome(poly);

	float resultPoly = eval_polynome(poly, x0);
	printf("Le resultat de polynome en (%d/%d) est %f\n\n", x0.p, x0.q, resultPoly);

	getchar();
	return 0;
}