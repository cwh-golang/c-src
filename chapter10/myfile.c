#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	FILE* fp;
	char ch ,filename[10];
	printf("%s\n", "请输入所用的文件名：");
	scanf("%s",filename);

	if (NULL==(fp = fopen(filename,"a")))
	{
		printf("%s\n", "无法打开此文件");
		exit(0);
		/* code */
	}

	ch = getchar();
	printf("请输入一个准备存储到磁盘的字符串（以#结束）：\n");
	ch = getchar();

	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch = getchar();
	}

	fclose(fp);
	putchar(10);
	

	return 0;
}