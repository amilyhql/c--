/*循环判断输入的整数的符号*/ 
#include <stdio.h>
int main (void)
{
	do{
		int a;
		printf("请输入一个整数：");scanf("%d",&a);
		if (a==0){
			printf("该整数为0\n"); 
		} else if(a>0){
			printf("该整数为正数\n");
		}else printf("该整数为负数\n"); 
	}while (1);
	return 0;
} 