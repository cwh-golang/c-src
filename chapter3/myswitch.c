#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

	float condiction = 1.3;
	switch (condiction){
		case 1.3 :
		printf("%s\n","condiction = 1.3" ); 
		case 2.3 :
		printf("%s\n","condiction = 2.3" );
		default :
		printf("%s\n","condiction is not konw!" );  
	}
	
	
	return 0;
}