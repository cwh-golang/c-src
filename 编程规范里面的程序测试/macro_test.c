#include <stdio.h>
#include <stdlib.h>


#define MAX_MACRO(a, b) ((a) > (b) ? (a) : (b))

int MAX_FUNC(int a, int b) {
	return ((a) > (b) ? (a) : (b));
}

int testFunc()
{
	unsigned int a = 1;
	// int a = 1;
	int b = -1;
	if ((int)a < b)
	{
		printf("a < b");
	}
	else
	{
		printf("a >= b");
	}


	printf("MACRO: max of a and b is: %d\n", MAX_MACRO(++a, b));
	printf("FUNC : max of a and b is: %d\n", MAX_FUNC(a, b));
	return 0;
}



int main(int argc, char const *argv[])
{

	testFunc();

	return 0;
}