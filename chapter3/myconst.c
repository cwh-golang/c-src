#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

	int i = 5;
	const int j = 5;
	switch(i){
		// case j:
		case 5:
		printf("ok\n"); break;
		default:
		printf("not ok\n"); break;
	}
}