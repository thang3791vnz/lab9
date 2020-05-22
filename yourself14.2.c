#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row, col;
	int *ptr;
	printf("\nEnter input row: "); /* Nhap vao so lieu hang nang */
	scanf("%d", &row);
	printf("\nEnter input col: \n"); /* Nhap vao so lieu cot doc */
	scanf("%d", &col);
	int i, j; /* khai bao bien int */
	int max = 0; /* tao ra bien max */
	ptr = (int*)malloc(row * col * sizeof(int)); /* trong sgk */
	for (i = 0; i < row; i++) /* cau truc phep cong cua hang ngang */
	{
		int sum = 0; /* tao ra bien tong cua 2 cot */
		for(j = 0; j < col; j++)
		{
			scanf("%d", (ptr + col * i + j)); /*nhap lieu */ /* cong thuc tong quat */
			sum = sum + *(ptr + col * i + j); /*tinh tong */
		}
		if(sum > max) /* so sanh */
		{
			max = sum; /* gan max = tong */
		}
	}
	printf("Tong la : %d\n", max); /* in ra tong */
	return 0;
}
