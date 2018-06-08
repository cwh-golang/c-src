#include <stdio.h>
#include <math.h>


void savemoney(void){
	double intrest_1,intrest_2,intrest_3,
	intrest_4,intrest_5;
	double principal = 100;
	intrest_1 = 0.0414;
	intrest_2 = 0.0468;
	intrest_3 = 0.0072;
	intrest_5 = 0.058;

	//one time for five years
	// principal *=(1 + intrest_5) * 5;
	principal *=(1 + intrest_5* 5);
	printf("one time for five years %f\n", principal);
	principal = 100;
	principal *=pow(1 + intrest_1,5);
	printf("five time for one years %f\n", principal);
	principal = 100;
	principal *=pow(1 + intrest_3/4,5*4);
	printf("no years %f\n", principal);

}



int main(int argc, char const *argv[]){
	double p = 0.1;
	double a = 1.0;
	double sum = 100.0;
	int year = 10;
	for (int i = 0; i < year; ++i)
	{
		sum *= (a + p);
		/* code */
	}
	printf("%10.2f\n",sum );	

	savemoney();
	
	return 0;
}