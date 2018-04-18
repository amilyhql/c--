/*显示横向较长的长方形*/
#include <stdio.h>
int main(void){
	int c ,k ,i ,j=0;
	printf("生成一个长方形\n");
	printf("一边：");scanf("%d",&c);
	printf("另一边：");scanf("%d",&k);
	c=(c>k)?c:k;
	k=(c>k)?k:c;
	for(i=1;i<=c*k;i++){
		printf("*");
		j++;
		if(j%c==0)printf("\n");
	}
	return 0;
}