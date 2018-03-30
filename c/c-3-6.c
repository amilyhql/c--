#include <stdio.h>
int main(void)
{
	int a,b,c,min;
	printf("请输入三个整数\n");
	printf("整数a：");scanf("%d",&a);
	printf("整数b：");scanf("%d",&b);
	printf("整数c：");scanf("%d",&c);
	if(a<=b){
		min=a;
	}else min=b;
	if(c<=min){
		min=c;
	}
	printf("三个整数中最小的是%d",min);
	return 0;
 } 