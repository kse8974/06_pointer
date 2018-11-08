#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[5] ={10, 20, 30, 40, 50};
	int average;
	int *ptr;
	
	//pointer setting
	ptr = grade;
	
	// average calculation
	int i;
	
	for(i=0; i<5; i++)
	{
		average += *(ptr+i); // ptr[i]
	}
	
	
	
	printf("average : %i \n", average/5);
	
	return 0;
}

