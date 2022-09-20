#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c; //1byte
	int i; //4byte
	
	printf("input a number : ");
	scanf("%c" ,  &c);
	
	i= c - 48;
	printf("The input number is %i\n", i);
		
	return 0;
}
