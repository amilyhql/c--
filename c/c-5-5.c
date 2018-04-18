/*对数组的全部元素进行倒序排列*/ 
#include <stdio.h>
#define NUMBER 7
int main (void)
{
	int i;
	int v[NUMBER];
	for (i=0;i<NUMBER;i++){
		printf("v[%d]:",i);scanf("%d",&v[i]);
	}
	for (i=0;i<(NUMBER/2);i++){
		int temp=v[i];
		v[i]=v[NUMBER-i-1];
		v[NUMBER-i-1]=temp;
	}
	for (i=0;i<NUMBER;i++){
		printf("v[%d]=%d\n",i,v[i]);
	}
	return 0;
}