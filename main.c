#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, sec, min, hour;
	
	printf("input the second : ");
	scanf("%i", &x);
	
	min=x/60;
	hour=min/60;
	sec=x%60;
	min=min%60;
	
	printf("The time for %i second is %i : %i : %i", x, hour, min, sec);    
	return 0;
}



