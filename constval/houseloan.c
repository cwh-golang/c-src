#include <stdio.h>
#include <math.h>
// #include <stdbool.h>

int main(int argc, char const *argv[])
{
	double money_sum = 420000;
	double month_pay = 2600;
	double rate = 0.0042;
	double month = 0.0;
	double tmp = 0.0;

	tmp = month_pay / (month_pay - money_sum * rate);
	month = log10(tmp) / log10(1 + rate);
	printf("%5.1f\n", month);
	
	
	
	return 0;
}