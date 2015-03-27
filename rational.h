#ifndef _RATIONAL_H_
#define _RATIONAL_H_

#include <assert.h>
#include <math.h>

typedef struct
{
	int p;
	int q;
}rational;

rational new_rational(int p, int q);
rational add_rational(rational r1, rational r2);

rational mult_rational(rational r1, rational r2);

rational power_rational(rational r, int power);
rational int_to_rational(int x);

int rational_to_int(rational r);

float rational_to_float(rational r);

#endif // _RATIONAL_H_
