#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数1：");scanf("%d",&a);
	printf("整数2：");scanf("%d",&b);
	if (a>b)
		printf("a>b"); 
	else if(a<b)
		printf("a<b") ; 
		else 
			printf("a=b");
	return 0;
 } 