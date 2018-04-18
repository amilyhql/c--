/*显示左上方的等腰直角三角形*/
#include <stdio.h>
int main(void){
	int i, j, len;
	printf("生成左上方的等腰直角三角形\n");
	printf("短边：");scanf("%d",&len);
	for (i=0;i<len;i++){
		for(j=1;j<=len-i;j++){
			printf("*");
		}printf("\n");
	}
	return 0;
}