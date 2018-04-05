/*从输入的整数开始倒数到1，输入负数时不换行*/ 
#include <stdio.h>
int main (void)
{
	int a, b;
	printf("请输入一个正整数：");scanf("%d",&a);
	b=a;
	while (a>=1){
		printf("%d ",a--);
	}
	if (b>=0){
		printf("\n");
	}
	return 0;
}