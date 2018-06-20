#include <stdio.h>
#include <string.h>



int main(int argc, char const *argv[])
{
	// char strsentence[] = "  hello world, this is a c program, nice to meet you";

char strsentence[] = "   ";
	int count = 0;
	int len = strlen(strsentence);
	int flag = 1; // 0: blank  1:not blank

	printf("%d\n",len );

	for (int i = 0; i < len; ++i)
	{
		if (' ' != strsentence[i])
		{			
			if (0 == flag)
			{
				count++;
				flag = 1; //blank
			}
		}
		else
		{
			flag = 0;//not blank
		}
	}
	
	printf("%d\n", count);
}