/*递增显示小于输入整数的所有2的乘方*/ 
#include <stdio.h>
int main (void)
{
	int a, c;
	printf("请输入一个正整数：");scanf("%d",&a);
	c=2;
	while (c<=a){
		printf("%d ",c);
		c*=2;
	}
	printf("\n");
	return 0;
} 