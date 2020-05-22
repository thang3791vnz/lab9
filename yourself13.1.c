#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *ptr; /* khai bao bien con tro */
	ptr = (char*)malloc(100*sizeof(char)); /* cung cap bo nho */
	int n, sum = 0;
	int i, j;
	printf("\nEnter word: "); /* Nhap vao chuoi de in */
	scanf("%s", ptr);
	n = strlen(ptr); /* ham xac dinh chieu dai cua chuoi */
	printf("%d\n", n);
	for(i = 0; i < n/2; i++)
	{
		for(j = n - 1; j > n/2; j)
		{
			if(*(ptr + i) == *(ptr + j)) /* so sanh cac phan tu doi nhau */
			/* e k su dung ham strcmp vi strcmp dung de so sanh so */
			/* doan nay e phan van nhat co giai dap giup e */
			{
				sum++; /* phan nay e dung de tinh cap doi xung bang nhau */
			}
		}
	}
	if(sum == n/2)
	{
		printf("In ra chuoi k doi xung\n");
	}
	else
	{
		printf("Im ra chuoi doi xung\n");
	}
	free(ptr);
	getch();
}
