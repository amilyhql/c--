/*显示金子塔的形状*/
#include <stdio.h>
int main(void){
	int i, j, c;
	printf("金子塔\n");
	printf("金子塔有几层：");scanf("%d",&c);
	for (i=1;i<=c;i++){
		for(j=1;j<=c-i;j++){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("*");
		}printf("\n");
	}
	return 0;
}