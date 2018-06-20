#include <stdio.h>

int main(int argc, char const *argv[])
{
	const volatile int i = 10; //read only
	volatile const  int j = 10;
	//i++;
	//j++;
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}