/*读取数组中的数据个数和元素值并显示*/ 
#include <stdio.h>
#define NUMBER 4 //元素个数
int main (void)
{
	int a[NUMBER];
	int i;
	printf("数据个数：%d\n",NUMBER);
	for (i=0;i<NUMBER;i++){
		printf("%d号：",i+1);
		scanf("%d",&a[i]);
	}
	printf("{");
	for (i=0;i<NUMBER;i++){
		if(i==NUMBER-1){
			printf("%d}",a[i]);
		}else printf("%d, ",a[i]);
	}
	return 0;
}