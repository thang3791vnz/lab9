#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[10][20];
	char *ptr[20];
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("\nEnter name %d: ", i + 1);
		gets(name[i]);
		char* temp;
		temp = (char*)malloc(20*sizeof(char));
		strcpy(temp, "s");
		strcat(name[i], temp);
		ptr[i] = name[i];
	}
	printf("\nNames in the plural form ");
	for(i = 0; i < 10; i++)
	{
		printf("\n%s", ptr[i]);
	}
	return 0;
}
