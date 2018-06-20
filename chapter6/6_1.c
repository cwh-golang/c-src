#include <stdio.h>
#include <string.h>
#include <math.h>



int main(int argc, char const *argv[])
{
	// char strsentence[] = "  hello world, this is a c program, nice to meet you";

	int numeber =0 ;
	int k = 0;
	char flag = 0;
	int num = 0;
	for (int i = 1; i <= 100; i+=2)
	{
		// k = (int)sqrt(i);
		k = i;
		flag = 0;
		// printf("%d\n", i);
		// for (int j = 2; j <= k; ++j)
		for (int j = 2; j < k; ++j)
		{
			if(0 == i % j){
				flag = 1;
				num++;
				break;
			}
		}
		if (0 == flag)
		{
			printf("%d\n", i);
		}
	}
	printf("%s %d\n","total num :", num);
}