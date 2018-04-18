/*显示边长为n的正方形*/
#include <stdio.h>
int main(void){
	int n ,i ,j=0;
	printf("生成一个正方形\n");
	printf("正方形有几层：");scanf("%d",&n);
	for(i=1;i<=n*n;i++){
		printf("*");
		j++;
		if(j%n==0)printf("\n");
	}
	return 0;
}