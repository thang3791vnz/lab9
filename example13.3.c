#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a, str[81], *ptr;
	printf("\nEnter a sentence: "); /* Nhap mot cau */
	gets(str);
	printf("\nEnter character to search for: "); /* nhap ky tu de tim kiem */
	a = getche();
	ptr = strchr(str, a);
	/* tra con tro ve char */
	printf("\nString starts at address: %u", str); /* chuoi bat dau cua dia chi */
	printf("\nfirst occurrence of the character is  at address: %u", ptr); /* phan tu xuat hien dau tien cua dia chi */
	printf("\nPosition of first occurrence (starting for 0) is : %d", ptr-str); /* vi tri xuat hien dau tien bat dau tu for 0 tinh tu diem xuat phat */
	return 0;
}
