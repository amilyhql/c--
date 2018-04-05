#include <stdio.h>
int main (void)
{
	int a, b;
	printf("请输入两个整数。\n");
	printf("整数A:");scanf("%d",&a);
	printf("整数B:");scanf("%d",&b);
	if ((a>b?a-b:b-a)<10 || (a>b?a-b:b-a)==10){
		printf("它们的差小于等于10");
	}else printf("它们的差大于等于11");
	return 0;
} 