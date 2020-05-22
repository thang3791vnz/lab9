#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string[100]; /* khai bao ten */
	int i, n; /* khai bao int */
	printf("\nEnter string: "); /* nhap vao mang ky tu */
	gets(string);
	n = strlen(string) - 1; /* su dung con tro voi ham len */
	for(i = n; i >= 0; i--) /* cau truc vong lap */
	{
		printf("%c", string[i]); /* in ra mang ky tu dao nguoc */
	}
	getch();
	return 0;
}
