/*显示所输入月份的季节*/ 
#include <stdio.h>
int main (void)
{
	int month;
	printf("请输入月份：");scanf("%d",&month);
	switch (month){
		case 3 :
		case 4 :
		case 5 :printf("%d月是春季",month);break;
		case 6 :
		case 7 :
		case 8 :printf("%d月是夏季",month);break;
		case 9 :
		case 10 :
		case 11 :printf("%d月是秋季",month);break;
		case 1 :
		case 2 :
		case 12 :printf("%d月是冬季",month);break;
		default :printf("您输入的不是月份");
	} 
	return 0;
} 