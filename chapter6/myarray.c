#include <stdio.h>
#include <string.h>

void foo(int n){
	int a[n];
	printf("%d\n", sizeof(a));//get value when run
	for (int i = 0; i < n; ++i)
	{
		a[i] = i;
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		//printf("%d,%d\n", i,a[i]);
		/* code */
	}
	
}


int main(int argc, char const *argv[])
{
	int i = 15;
	foo(i);
	/* code */
	printf("%s\n", "hello world!");
	puts("china beijing");
	char str[50] = {0};
	gets(str);
	puts(str);
	strcat(str,"hello");
	puts(str);
	return 0;
}