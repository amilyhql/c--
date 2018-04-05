/*递增显示从1到输入的正整数为止的各个整数，输入负数时不换行*/ 
#include <stdio.h>
int main (void)
{
	int a, b, c;
	printf("请输入一个正整数：");scanf("%d",&a);
	b=a;
	c=1;
	while (c<=a){
		printf("%d ",c++);
	}
	if (b>=0){
		printf("\n");
	}
	return 0;
} 