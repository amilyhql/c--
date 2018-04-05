/*显示正整数的位数*/ 
#include <stdio.h>
int main (void)
{
	int a, b;
	int c=0;
	do {
		printf("正整数：");scanf("%d",&a);
		if (a<=0){
			printf("请不要输入非正数\n");
		}else b=a;
	}while (a<=0);
	while (a>0){
		a=a/10;
		c++;
	}
	printf("%d的位数是%d",b,c);
	return 0;
} 