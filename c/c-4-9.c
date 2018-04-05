/*交替显示+和-，总个数等于所输入的整数值，输入非正整数时，什么也不显示*/ 
#include <stdio.h>
int main (void)
{
	int a;
	printf("正整数：");scanf("%d",&a);
	while(a>1){
		putchar('+');
		putchar('-');
		a-=2;
	} 
	if ((a%2)==1){
		putchar('+');
	}
	return 0;
} 