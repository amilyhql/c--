/*显示输入的整数以下的所有奇数*/ 
#include <stdio.h>
int main (void)
{
	int a, i;
	printf("整数值：");scanf("%d",&a);
	for(i=1;i<=a;i+=2){
		printf("%d ",i);
	}
	return 0;
} 