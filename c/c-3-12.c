#include <stdio.h>
int main(void)
{
	int a;
	printf("请输入一个整数；");scanf("%d",&a);
	switch (a%2){
	case 0 :printf("该整数是偶数");break;
	case 1 :printf("该整数不是偶数");break;
	}
	return 0;
}