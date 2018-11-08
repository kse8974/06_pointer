#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b =temp;
	return 0;
}


int main(int argc, char *argv[]) {
	
	int x = 10;
	int y = 20;
	
	printf(" x value: %d  y value: %d \n", x,y);
	
	swap(&x, &y);
	
	printf(" x value: %d y value: %d \n", x, y);
	
	return 0;
}

