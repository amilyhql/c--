/*逆向显示正整数，同时显示输入的值*/ 
#include <stdio.h>
int main (void)
{
	int a, b;
	do {
		printf("正整数：");scanf("%d",&a);
		if (a<=0){
			printf("请不要输入非正数\n");
		}else b=a;
	}while (a<=0);
	printf("%d逆向显示的结果是",b);
	while (a>0){
		printf("%d",a%10);
		a=a/10;
	}
	return 0;
} 