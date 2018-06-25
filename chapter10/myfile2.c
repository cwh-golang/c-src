#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	FILE* fp;
	char ch ,filename[10];
	printf("%s\n", "ÇëÊäÈëËùÓÃµÄÎÄ¼şÃû£º");
	scanf("%s",filename);

	if (NULL==(fp = fopen(filename,"a")))
	{
		printf("%s\n", "ÎŞ·¨´ò¿ª´ËÎÄ¼ş");
		exit(0);
		/* code */
	}

	ch = getchar();
	printf("ÇëÊäÈëÒ»¸ö×¼±¸´æ´¢µ½´ÅÅÌµÄ×Ö·û´®£¨ÒÔ#½áÊø£©£º\n");
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
}ÿ