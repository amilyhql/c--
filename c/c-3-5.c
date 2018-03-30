#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数1：");scanf("%d",&a);
	printf("整数2：");scanf("%d",&b);
	printf("相等运算的值是%d\n",a==b);
	printf("整数1大于整数2的运算的值是%d",a>b);
	return 0;
 } 