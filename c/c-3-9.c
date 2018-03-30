#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数a：");scanf("%d",&a);
	printf("整数b：");scanf("%d",&b);
	printf("它们相等么？....0(相等)/1(不相等)\n%d",(a==b?0:1)); 
	return 0;
 } 