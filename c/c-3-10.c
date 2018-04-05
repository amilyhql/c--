#include <stdio.h>
int main (void)
{
	int a, b , c;
	printf("请输入三个整数。\n");
	printf("整数A:");scanf("%d",&a);
	printf("整数B:");scanf("%d",&b);
	printf("整数C:");scanf("%d",&c);
	if ((a==b) && (b==c)){
		printf("三个值相等"); 
	}else if ((a!=b) && (a!=c) && (b!=c)){
		printf("三个值各不相同"); 
	}else printf("有两个值相等");
	return 0;
} 