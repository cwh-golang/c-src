#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	FILE* fp;
	char ch ,filename[10];
	printf("%s\n", "���������õ��ļ�����");
	scanf("%s",filename);

	if (NULL==(fp = fopen(filename,"a")))
	{
		printf("%s\n", "�޷��򿪴��ļ�");
		exit(0);
		/* code */
	}

	ch = getchar();
	printf("������һ��׼���洢�����̵��ַ�������#��������\n");
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
}�