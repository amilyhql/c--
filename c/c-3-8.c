#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数a：");scanf("%d",&a);
	printf("整数b：");scanf("%d",&b);
	if (a>=b){
		printf("它们的差是：%d",a-b);
	}else printf("它们的差是：%d",b-a);
	return 0;
 } 