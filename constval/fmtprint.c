#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	printf("the letter is %10c\n",'a');//10 blank
	printf("the letter is %10c\n",123);//10 blank
	printf("the data is %f\n",121);//0.0000000
	printf("the data is %f\n",121.0);//
	printf("the data is %20.15f\n",121.0);//
	printf("the data is %20.15f\n",121);//not 12.0
	printf("the data is %20.1500f\n",121.123456);//
	float a = 1000 / 3.0 ;
	double b = 1000 / 3.0 ;
	
	printf("%f\n", a); //33.333344
	printf("%f\n", b);//33.3333333
	printf("%x\n", 12345);
	printf("%%%%%%%%%\n");//print more %
	
	putchar('a');
	putchar('\n');
	char a_char;
	a_char = getchar();
	putchar(a_char); 
	putchar('\n');
	putchar(getchar());
	putchar('\n');
	putchar(getchar()+32);
	putchar('\n');

	
	
	return 0;
}