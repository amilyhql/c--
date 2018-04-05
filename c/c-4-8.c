/*输入一个整数，连续显示该整数个*，当输入的值小于1时，不换行*/ 
#include <stdio.h>
int main (void)
{
	int a, b;
	printf("正整数：");scanf("%d",&a);
	b=a;
	while(a-->0){
		putchar('*');
	} 
	if(b>=1){
		printf("\n");
	}
	return 0;
} 