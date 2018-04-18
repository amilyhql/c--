/*显示整数n个*，每显示5个就换行*/
#include <stdio.h>
int main(void){
	int n ,i;
	printf("显示多少个*：");scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("*");
		if(i%5==0)printf("\n");
	}
}