/*把数组中的全部元素倒序复制到另一个数组中*/ 
#include <stdio.h>
int main (void)
{
	int i;
	int v[5]={17,23,36};
	int b[5];
	for (i=0;i<5;i++){
		b[i]=v[4-i];
	}
	printf("   a  b\n");
	printf("---------\n");
	for(i=0;i<5;i++){
		printf("%4d%4d\n",v[i],b[i]);
	}
	return 0;
}