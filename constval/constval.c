
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
	printf("%d\n", sizeof(short));
	printf("%u\n", 55);
	unsigned int k = -1;
	printf("%d\n", k);
	printf("%u\n", k);
	printf("%d,%c\n", 63,63);
	printf("%d,%c\n", 128,128);
	char k_char = 254;
	printf("%d,%c\n", k_char,k_char);
	return 0;
}