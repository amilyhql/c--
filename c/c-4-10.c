/*换行连续显示*，总个数等于输入的整数值，输入0以下时什么也不显示*/ 
#include <stdio.h>
int main (void)
{
	int a;
	printf("正整数：");scanf("%d",&a);
	while(a>0){
		putchar('*');
		printf("\n");
		a--;
	} 
	
	return 0;
} 