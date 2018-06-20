#include <stdio.h>
#include <string.h>
#include <time.h>  


int main(int argc, char const *argv[])
{
	float f1 = 1.3;
	float f2 = 1.1;
	double tmp_float = 1.0;
	double result = 1.0;

	int f1_int = 1;
	int f2_int = 1;
	int tmp_int = 1;
	int result_int = 1;


	
	printf("%f\n", (34.6f - 34.0f));
	printf("%f\n", (f1));
	printf("%f\n", (f2));

	// printf("%s\n", (localtime()));

    time_t t_start = time(0);   
    char tmp[64];   
    strftime( tmp, sizeof(tmp), "%Y/%m/%d %X %A 本年第%j天 %z",localtime(&t_start) );   
    puts( tmp );   

	// for (int i = 0; i < 1000000000; ++i)
	// {
	// 	/* code */
	// 	tmp_float = f1 * f2;
	// 	result *= tmp_float;
	// 	result /= f2;
	// 	result /= f1;
	// 	//printf("%f\n", (result));
	// }

	// printf("%f\n", (result));


	// for (int i = 0; i < 1000000000; ++i)
	// {
	// 	/* code */
	// 	tmp_int = f1_int * f2_int;
	// 	result_int *= tmp_int;
	// 	result_int /= f1_int;
	// 	result_int /= f2_int;
	// 	//printf("%f\n", (result));
	// }
	// printf("%d\n", (result_int));


	for (int i = 0; i < 1000000000; ++i)
	{
		/* code */
		tmp_int = f1_int + f2_int;
		result_int += tmp_int;
		result_int -= f1_int;
		result_int -= f2_int;
		//printf("%f\n", (result));
	}
	printf("%d\n", (result_int));



	time_t t_end = time(0);
	strftime( tmp, sizeof(tmp), "%Y/%m/%d %X %A 本年第%j天 %z",localtime(&t_end) );   
    puts( tmp );   
}