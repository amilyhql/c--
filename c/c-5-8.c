/*输入学生的分数并显示出分布情况*/ 
#include <stdio.h>
#define NUMBER 80 //人数上限 
int main (void)
{
	int tensu[NUMBER];
	int i, j;
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
	printf("\n--分布图---\n");
	for (i=0;i<=9;i++){
		printf("%3d-%3d:",i*10,i*10+9);
		for(j=0;j<bunpu[i];j++){
			putchar('*');
		}putchar('\n');
	}
	printf("    1oo:");
	for (j=0;j<bunpu[10];j++){
		putchar('*');
	}putchar('\n');
	return 0;
}
