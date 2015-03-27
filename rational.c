#include "rational.h"

rational new_rational(int p, int q){	assert(q != 0 && "q has to be different from 0");	rational r;	r.p = p;	r.q = q;	return r;}
rational add_rational(rational r1, rational r2)
{
	rational r;
	r.p = (r1.p*r2.q) + (r2.p*r1.q);
	r.q = r1.p*r2.q;
	return r;
}

rational mult_rational(rational r1, rational r2){
	rational r;
	r.p = r1.p*r2.p;
	r.q = r1.q*r2.q;
	return r;
}

rational power_rational(rational r, int power){	r.p = pow(r.p, power);	r.q = pow(r.q, power);	return r;}
rational int_to_rational(int x)
{
	return (new_rational(x, 1));
}

int rational_to_int(rational r)
{
	return (r.p / r.q);
}

float rational_to_float(rational r)
{
	return ((float)r.p /(float) r.q);
}