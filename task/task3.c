/*显示固定图案*/
#include <stdio.h>
int main(void){
	int a, h, i, j;
	h=3;
	for (i=1;i<=h;i++){
		for (a=1;a<=i;a++){
			printf(" ");
		}
		for (a=1;a<=2*h-2*i+1;a++){
			printf("*");
		}
		printf("\n");
	}
	for (i=h-1;i>0;i--){
		for (a=1;a<=i;a++){
			printf(" ");
		}
		for (a=1;a<=2*h-2*i+1;a++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 