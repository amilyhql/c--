/*显示身高和标准体重的对照表*/ 
#include <stdio.h>
int main (void)
{
	int a, b, c;
	printf("开始数值（cm）：");scanf("%d",&a);
	printf("结束数值（cm）：");scanf("%d",&b);
	printf("间隔数值（cm）：");scanf("%d",&c);
	for (;a<=b;){
		printf("%dcm    %.2fkg\n",a,(double)(a-100)*0.9);
		a+=c;
	}
	return 0;
} 