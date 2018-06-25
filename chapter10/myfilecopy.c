#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	FILE* fp_in;
	FILE* fp_out;
	char ch ;
	char infile[] = "myfile.c"; //
	char outfile[] = "myfile2.c"; //
	

	if (NULL==(fp_in = fopen(infile,"r")))
	{
		printf("%s\n", "infile open error !");
		exit(0);
		/* code */
	}

	if (NULL==(fp_out = fopen(outfile,"w")))
	{
		printf("%s\n", "outfile open error !");
		exit(0);
		/* code */
	}

	while(!feof(fp_in))
	{
		ch = fgetc(fp_in);
		fputc(ch,fp_out);
		putchar(ch);
	}

	fclose(fp_in);
	fclose(fp_out);
	putchar(10);
	

	return 0;
}