#include "rational.h"

int main()
{

	//test rationals'functions
	rational r1 = new_rational(5, 8);
	rational r2 = new_rational(8, 5);
	printf("r1=(%d/%d)\nr2=(%d/%d)\n", r1.p, r1.q, r2.p, r2.q);

	rational sum_rationals = add_rational(r1, r2);
	printf("r1+r2=(%d/%d)\n", sum_rationals.p, sum_rationals.q);

	rational mul_rationals = mult_rational(r1, r2);
	printf("r1*r2=(%d/%d)\n", mul_rationals.p, mul_rationals.q);

	int power = 3;
	rational rational_power = power_rational(r1, power);
	printf("r1^%d=(%d/%d)\n", power, rational_power.p, rational_power.q);

	int integer = 5;
	rational i_to_r = int_to_rational(integer);
	printf("rational of integer %d is (%d/%d).\n", integer, i_to_r.p, i_to_r.q);

	int r_to_i = rational_to_int(r2);
	printf("integer of rational (%d/%d) is %d.\n", r2.p, r2.q, r_to_i);

	float r_to_f = rational_to_float(r2);
	printf("float of rational (%d/%d) is %f.\n\n", r2.p, r2.q, r_to_f);

	getchar();
	return 0;
}