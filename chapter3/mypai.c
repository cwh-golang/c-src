#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

	double pi = 0.0;
	double nest = 1.0;
	
	for(double sign = 1.0,i = 1;fabs(nest) >= 1e-8;){
		i += 2;
		pi += nest;
		sign = -sign;
		nest = sign / i;
		//printf("%10.6f\n", pi);
	}
	pi *= 4;
	printf("%10.9f\n", pi);
	return 0;
}