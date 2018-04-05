/*求1到n的和，n从键盘输入*/ 
#include <stdio.h>
int main (void)
{
	int n, i, sum=0;
	printf("n的值：");scanf("%d",&n);
	if (n>0){
		for (i=1;i<=n;i++){
			sum+=i;
		}
	}
	printf("1到%d的和为%d",n,sum);
	return 0;
} 