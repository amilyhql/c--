/*输入两门课的成绩,判断是否及格*/
#include <stdio.h>
int main(void){
	int a, b, c;
	printf("请输入两门课的成绩。\n");
	printf("课程一：");scanf("%d",&a);
	printf("课程二：");scanf("%d",&b);
	if (a<0 || a>100 || b<0 || b>100){
		c=-1;
	}else if (a>=60 && b>=60){
			c=1;
		}else c=0;
	switch (c){
		case 0 :printf("it is not pass.");break;
		case 1 :printf("it is pass.");break;
		case -1 :printf("it is error.");break;
	}
	return 0;
} 