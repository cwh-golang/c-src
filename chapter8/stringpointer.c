#include <stdio.h>


int main(int argc, char const *argv[])
{
	char arr[]="helloworld";
	// const char arr[]="helloworld";
	//arr[3] = 5; //can set value 
	// char *p = arr;//can not set value
	char * p = "nihaoggg";
	// *(p+1) = 'k';//segmentation fault
	// p = arr;
	printf("%s\n", p);
	printf("%c\n", *(p+5));
	printf("%s\n", arr);
	return 0;
}