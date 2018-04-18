/*显示输入整数的所有约数与约数的个数*/
#include <stdio.h>
int main(void){
	int i, n, j=0;
	printf("整数值：");scanf("%d",&n);
	for (i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
			j++;
		}
	}printf("\n");
	printf("约数有%d个",j);
	return 0;
}