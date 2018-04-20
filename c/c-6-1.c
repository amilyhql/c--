/*创建函数，返回两个int型整数中较小的一个*/ 
#include <stdio.h>
int min(int m, int n)
{
	int min=m;
	min=(m>n)?n:m;
}
int main (void){
	int a, b;
	printf("请输入两个整数：\n");
	printf("a=");scanf("%d",&a); 
	printf("b=");scanf("%d",&b); 
	printf("其中较小的是：%d",min(a,b));
	return 0;
}