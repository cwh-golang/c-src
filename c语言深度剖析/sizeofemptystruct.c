#include <stdio.h>

struct student
{
	 char i;
}stu;

struct teacher
{
	 char i;
	 char j;
	 char k;
}tch;


int main(int argc, char const *argv[])
{
	printf("%s\n", "helloworld");
	printf("%d\n", sizeof(stu));
	tch.i=1;
	tch.j=2;
	tch.k=1;
	printf("%d\n", sizeof(tch));
	
	// printf("%d\n", sizeof(student));
	return 0;
}