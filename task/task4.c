/*欧几里德算法求最大公因子*/
#include <stdio.h>
int main(void){
	int s, y, l, m, z;
	printf("请输入两个正整数\n");
	printf("整数一：");scanf("%d",&l);
	printf("整数二：");scanf("%d",&m);
	if(l<=0 || m<=0){
		printf("输入的不是正整数");
	}else{
		if(m>l){
		z=l;
		l=m;
		m=z;
		}
		do{
			s=l/m;
			y=l%m;
			if(y==0){
				printf("这两个整数的最大公因子是%d",m);
			}else{
				l=m;
				m=y;
			}
		}while (y!=0);
	}
	return 0;
} 