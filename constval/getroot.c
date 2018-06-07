#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double a,b,c,disc,x1,x2,p,q;
	printf("Please input 3 data:\n");
	// scanf("%lf,%lf,%lf",&a,&b,&c);
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%lf,%lf,%lf\n",a,b,c );
	disc = b * b - 4 * a * c;
	if (disc < 0.00001){
		/* code */
		printf("the parameter input is rong\n");
		return 0;
	}else{
		printf("the parameter input is right\n");
	}
	p = -b / (2 * a); //better to use 2.0 
	q = sqrt(disc) / (2 * a);
	x1 = p + q;
	x2 = p - q;
	// printf("the root is %lf, %lf\n", x1,x2);
	// printf("the root is %7.2f, %7.2f\n", x1,x2);
	// printf("the root is %7.4f, %7.4f\n", x1,x2);
	printf("the root is %7.2f, %7.2f\n");//this will not printf 0
	return 0;
}