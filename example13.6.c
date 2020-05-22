#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float *calloc1, *calloc2;
	int i;
	calloc1 = (float *) calloc(3, sizeof(float));
	calloc2 = (float *) calloc(3, sizeof(float));
	if(calloc1 != NULL && calloc2 != NULL)
	{
		for(i = 0; i < 3; i++)
		{
			printf("\ncalloc1[%d] holds %05.5f", i, calloc1[i]); /* holds = giu */
			printf("\ncalloc2[%d] holds %05.5d", i, *(calloc2 + i)); /* holds = giu */
		}
		free(calloc1);
		free(calloc2);
		return 0;
	}
	else
	{
		printf("Not enough memory\n"); /* k du bo nho */
		return 1;
	}
}
