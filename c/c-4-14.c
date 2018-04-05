/*循环显示123456789，显示的位数和输入的整数值相同*/ 
#include <stdio.h>
int main (void)
{
	int n, a, max, i=0;
	printf("请输入一个整数：");scanf("%d",&n);
	if (n<=9){
		for (a=1;a<=n;a++){
			printf("%d",a);
		}
	}else {
		do{
			for (a=1;a<=9;a++){
				printf("%d",a);
				i++;
			}
		}while ((n-i)>9);
		while ((n-i)<9){
			i=n-i;
			for (a=1;a<=i;a++){
				printf("%d",a);
			}
		}
	}
	return 0;
} 