#include <stdio.h>
int main(void)
{
	int a;
	printf("请输入一个整数:");scanf("%d",&a);
	if (a==0)
		printf("该整数为0"); 
	else if (a>0)
		printf("该整数为正数") ; 
	else if (a<0) 
		printf("该整数为负数"); 
	return 0;
 } 