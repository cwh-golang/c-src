#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

	unsigned int F1 = 1;
	unsigned int F2 = 1;
	unsigned int Fn = 0;

	printf("Fn = %d\n", F1);
	printf("Fn = %d\n", F2);
	for (int i = 2; i <= 40; ++i)
	{
		Fn = F1 + F2;
		F1 = F2;
		F2 = Fn;
		printf("Fn = %d\n", Fn);
		/* code */
	}
	return 0;
}