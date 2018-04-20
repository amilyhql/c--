/*打印1~100以内的素数，每五个数字一行*/
#include <stdio.h>
int main(void){
	int i, j, a=0, s, y;
	for (i=1;i<=100;i++){
		s=0;
		for(j=1;j<=i;j++){
			y=i%j;
			if (y!=0){
				s++;
			}
		}
		if (s==(i-2) || (i==1)){
			printf("%3d",i);
			a++;
			if((a%5)==0){
				printf("\n");
			}
		}
	}
	return 0;
} 