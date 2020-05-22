#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[100]; /* khai bao bien chuoi 1 */
	char str2[100]; /* khai bao bien chuoi 2 */
	char str3[100]; /* khai bao bien chuoi 3 */
	int len; /* khai bao con tro kieu ky tu < ham len > */
	printf("\nEnter the string1: \n"); /*gia tri chuoi 1 */
	gets(str1);
	printf("\nEnter the string2: \n"); /* gia tri chuoi 2 */
	gets(str2);
	strcpy(str3, str1); /* chuoi thu 3 hien tai k co bat cu gia tri nao */
	/* lap ra chuoi 1 va sao chep no */ /* sao chep o day co oi */
	strcat(str3, str2); /* ghep chuoi 2 va 3 */
	printf("\n\nConcatenation: %s", str3);
	return 0;
}
