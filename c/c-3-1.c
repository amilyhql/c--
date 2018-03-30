#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数1:");scanf("%d",&a);
	printf("整数2:");scanf("%d",&b);
	if ((a%b)==0)
		printf("b是a的约数"); 
	else
		printf("b不是a的约数"); 
	return 0;
 } 