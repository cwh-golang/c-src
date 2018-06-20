#include <stdio.h>
#include <string.h>



int main(int argc, char const *argv[])
{
	char strdes[1000]= "hello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello worldhello world strcpyhello world strcpyhello world strcpyhello world strcpyhello world strcpyhello world strcpyhello world strcpyhello world strcpyhello world strcpyhello world strcpy(strdes,strsrc); strcpy(strdes,strsrc);";
	// char strsrc[] = "hello world";
	char strsrc[15];
	// strcpy(strdes,strsrc);
	strcpy(strsrc,strdes);
	
	printf("%s\n", strsrc);
	return 0;
}