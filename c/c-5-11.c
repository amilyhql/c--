/*显示六名学生两门课程的分数，显示各门课程的总分和平均分，已及各个学生的总分和平均分*/ 
#include <stdio.h>
int main (void){
	int a[6][2]={0};
	int i, j, sum=0, pj;
	printf("请输入六名学生课程一的成绩\n");
	for (i=0;i<6;i++){
		printf("学生%d:",i+1);scanf("%d",&a[i][1]); 
	}
	printf("请输入六名学生课程二的成绩\n");
	for (i=0;i<6;i++){
		printf("学生%d:",i+1);scanf("%d",&a[i][2]); 
	}
	for(i=0;i<6;i++){
		sum=sum+a[i][1];
	}
	printf("课程一的总分：%3d  平均分：%f\n",sum,(double)sum/6);
	sum=0;
	for(i=0;i<6;i++){
		sum=sum+a[i][2];
	}
	printf("课程二的总分：%3d  平均分：%f\n",sum,(double)sum/6);
	for (i=0;i<6;i++){
		printf("学生%d的总分：%3d   平均分：%f\n",i+1,a[i][1]+a[i][2],(double)(a[i][1]+a[i][2])/2);
	}
	return 0;
}