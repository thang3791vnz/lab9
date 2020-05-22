#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int *ptr;
	int i;
	printf("How many ints would you like store ? "); /* ban muon luu tru bao nhieu int */
	scanf("%d", &number);
	ptr = (int *) malloc (number * sizeof(int)); /* phan bo bo nho */
	if(ptr != NULL)
	{
		for(i = 0; i < number; i++)
		{
			*(ptr + i) = i;
		}
		for(i = number; i > 0; i--)
		{
			printf("%d\n", *(ptr+(i - 1)));
		}
		free(ptr);
		return 0;
	}
	else
	{
		printf("\nMemory allocation failed - not enough memory.\n"); /* k du bo nho */
		return 1;
	}
}
