/*递增显示从1到输入的正整数为止的各个整数*/ 
#include <stdio.h>
int main (void)
{
	int a, c;
	printf("请输入一个正整数：");scanf("%d",&a);
	c=2;
	while (c<=a){
		printf("%d ",c);
		c+=2;
	}
	printf("\n");
	return 0;
} 