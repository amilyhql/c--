/*读取输入的两个整数的值，计算它们之间所有整数的和*/ 
#include <stdio.h>
int main (void)
{
	int a, b, max, min,max2, sum=0;
	printf("请输入两个整数\n");
	printf("整数a：");scanf("%d",&a); 
	printf("整数b：");scanf("%d",&b); 
	max=(a>b)?a:b;
	min=(a<b)?a:b;
	max2=max;
	do {
		sum+=max;
		max--;
	}while (max>=min);
	printf("大于等于%d小于等于%d的所有整数的和是%d",min,max2,sum);
	return 0;
} 