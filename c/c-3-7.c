#include <stdio.h>
int main(void)
{
	int a,b,c,d,max;
	printf("请输入三个整数\n");
	printf("整数a：");scanf("%d",&a);
	printf("整数b：");scanf("%d",&b);
	printf("整数c：");scanf("%d",&c);
	printf("整数d：");scanf("%d",&d);
	if (a>=b){
		max=a;
	}else max=b;
	if (c>=max){
		max=c;
	}
	if (d>=max){
		max=d;
	}
	printf("四个整数中最大的是%d",max);
	return 0;
 } 