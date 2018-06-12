#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

	unsigned int sqrtnum = 1;
	unsigned int rimeflag = 0;
	for (int i = 100; i < 200; ++i)
	{
		sqrtnum = sqrt(i);
		for (int j = 2; j <= sqrtnum; j++)
		 {
		 	if (i % j == 0)
		 	{
		 		rimeflag = 1;
		 		// printf("%s %d\n", "j = ",j);
		 		break;
		 		/* code */
		 	}
		 	/* code */
		 } 
		 if (rimeflag == 0)
		 {
		 	printf("%d \n", i);
		 	/* code */
		 }
		 rimeflag = 0;
		/* code */
	}
	
	return 0;
}

// int main(int argc, char const *argv[])
// {
// 	int flag = 0;
// 	int i = 2;
// 	for (; i < 169; ++i)
// 	{
// 		if(169 % i == 0){
// 			flag = 1;
// 			break;
// 		}
			
// 		/* code */
// 	}
// 	if (flag == 0){
// 		printf("rime\n");
// 		printf("%d\n", i);
// 	}else{
// 		printf("not rime\n");
// 		printf("%d\n", i);
// 	}
	
// 	return 0;
// }