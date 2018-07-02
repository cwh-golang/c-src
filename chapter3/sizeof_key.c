#include <stdio.h>

int main(void){
	
	unsigned int a_sizeof_char = 0;
	unsigned int a_sizeof_short = 0;
	unsigned int a_sizeof_int = 0;
	unsigned int a_sizeof_long = 0;
	unsigned int a_sizeof_double = 0;
	unsigned int a_sizeof_longlong = 0;
	
	printf("Helloworld!\r\n");
	printf("C program practice!\r\n");


	a_sizeof_char = (unsigned int)sizeof(char);
	a_sizeof_short = (unsigned int)sizeof(short);
	a_sizeof_int = (unsigned int)sizeof(int);
	a_sizeof_long = (unsigned int)sizeof(long);
	a_sizeof_double = (unsigned int)sizeof(double);
	// a_sizeof_longlong = (unsigned int)sizeof(long long);

	// printf(5);
	// a_sizeof_char = 6;
	printf("%d",a_sizeof_char);  //1
	printf("\r\n");

	printf("%d",a_sizeof_short);  //2
	printf("\r\n");

	printf("%d",a_sizeof_int);  //4
	printf("\r\n");

	printf("%d",a_sizeof_long);  //4
	printf("\r\n");

	printf("%d",a_sizeof_double);  //8
	printf("\r\n");
    
  return 0;
}