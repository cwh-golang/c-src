#include <stdio.h>
#include <string.h>



int main(int argc, char const *argv[])
{
	char strdes[]= "DFADGA";
	char strsrc[] = "hello";
	// char strsrc[] = "i hello";

	if (!strcmp(strdes,strsrc)){
		printf("%s\n", "equals");
	}else{
		printf("%s\n", "not equals");
	}
	printf("%d\n", strlen(strdes));
	printf("%s\n", strlwr(strdes));
	// printf("%S\n", strlwr(strdes));
	printf("%s\n", strlwr(strdes));
	printf("%s\n", strupr(strdes));
	return 0;
}