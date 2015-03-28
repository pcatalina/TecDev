#ifndef _POLY_H_
#define _POLY_H_

#include <stdlib.h>
#include <stdio.h>
#include<math.h>
#include "rational.h"

#define K 10

typedef struct
{
	rational* coef;
	int deg;
}polynome;

polynome* new_polynome(int deg);

polynome* set_coef_polynome(rational c, int d);

rational get_coef_polynome(polynome* poly, int d);

int get_degree_polynome(polynome* poly);

float eval_polynome(polynome* poly, rational x0);

void affiche_polynome(polynome* poly);

float dev_lim_ln(rational x, int t);
#endif // !_POLY_H_
