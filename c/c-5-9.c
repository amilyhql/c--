/*输入学生的分数并横向显示出分布情况*/ 
#include <stdio.h>
#define NUMBER 80 //人数上限 
int main (void)
{
	int tensu[NUMBER];
	int i, j, h, max=0;
	int num;
	int bunpu[11]={0};//分布图 
	printf("请输入学生人数：");
	do {
		scanf("%d",&num);
		if (num < 1||num > NUMBER){
			printf("\a请输入1~%d的数：",NUMBER);
		}
	}while (num < 1||num > NUMBER);
	printf("请输入%d人的分数。\n",num);
	for (i=0;i<num;i++){
		printf("%2d号：",i+1);
		do {
			scanf("%d",&tensu[i]);
			if (tensu[i] < 0||tensu[i] > 100){
				printf("请输入1~100的数:");
			}
		} while (tensu[i] < 0||tensu[i] > 100);
		bunpu[tensu[i]/10]++;	
	}
	for (i=0;i<11;i++){
		max=(max>bunpu[i])?max:bunpu[i];//找到最高的 
	}
	for (h=max;h>0;h--){
		for (i=0;i<11;i++){
			if(bunpu[i]==h){		//用行数和bunpu[i]判断有没有* 
				bunpu[i]--;
				printf(" * ");
			}else printf("   ");
		}putchar('\n');
		
	}
	for (j=1;j<=33;j++){
		printf("-");
	}printf("\n");
	for (j=0;j<11;j++){
		printf("%2d ",j*10);
	}printf("\n");
	return 0;
}
