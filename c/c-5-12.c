/*求四名学生两次考试中三门课程的总分并显示，用三维数组*/ 
#include <stdio.h>
int main (void){
	int i, j, k;
	int tensu[2][4][3]={{{91,63,78},{67,72,46},{89,34,53},{32,54,34}},{{97,67,82},{73,43,46},{97,56,21},{85,46,35}}};
	for (k=0;k<2;k++){
		printf("第%d次考试分数：\n",k+1);
		for (i=0;i<4;i++){
			for (j=0;j<3;j++)
				printf("%4d",tensu[k][i][j]);
			putchar('\n');
		}
	}
	printf("总分：\n");
	for (i=0;i<4;i++){
		for(j=0;j<3;j++)
			printf("%4d",tensu[0][i][j]+tensu[1][i][j]);
			printf("\n");
	}
	return 0;
}