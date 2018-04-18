/*显示整数层数的向下金子塔的形状*/
#include <stdio.h>
int main(void){
	int i, j, c;
	printf("向下的金子塔\n");
	printf("金子塔有几层：");scanf("%d",&c);
	for (i=0;i<c;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=1;j<=2*c-1-2*i;j++){
			printf("%d",i+1);
		}printf("\n");
	}
	return 0;
}