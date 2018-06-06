
#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int i = 5;
	int j = 6;
	int *p = (int *)&i;
	*p = 7;
	printf("%d\n", &i);
	printf("%d\n", p);

	printf("%d\n", i);
	printf("%d\n", *p);
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(double));
		
	return 0;
}