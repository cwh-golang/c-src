#include <stdio.h>
#include <string.h>
#include <math.h>


int f2(void);
int f1(void);
int f3(int a ,int b,int c);
int f4(int a ,int b,int c);

int num = 0;

int f1(void){
	//printf("%s\n","f1");
	printf("%d\n",num++);
	f2();
	return 0;
}

int f2(void){
	//printf("%s\n","f1");
	printf("%d\n",num++);
	f1();
	return 0;
}

int f3(int a ,int b,int c){
	//printf("%s\n","f1");
	a = b + c;
	printf("%d\n",a++);
	printf("%d\n",num++);
	f3(1,2,3);
	return 0;
}

int f4(int a ,int b,int c){
	//printf("%s\n","f1");
	static k;
	a = b + c;
	printf("%d\n",a++);
	printf("%d\n",num++);
	f4(1,2,3);
	return 0;
}

auto int auot_k = 5;

int main(int argc, char const *argv[])
{
	// char strsentence[] = "  hello world, this is a c program, nice to meet you";
	// printf("%s %d\n","total num :", num);
	//f1();
	printf("%d\n",auot_k++);
	f3(1,2,3);
}