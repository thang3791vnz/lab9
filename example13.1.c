#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int var = 500, *ptr_var;
	/*var duoc khai báo là so nguyên và ptr_var là con tro den so nguyên*/
	ptr_var = &var; /*luu tru dia chi cua var trong prt_var* */
	/* in gia tri cua bien (var) va dia chi noi var duoc luu tru */
	printf("The value %d is stored at address %u: ", var, &var);
	/* gia tri printf duoc luu tru trong bien ptr ( ptr_var ) va dia chi noi luu tru ptr_var */
	printf("\nThe value %d is stored at address: %u", *ptr_var, ptr_var);
	return 0;
}
