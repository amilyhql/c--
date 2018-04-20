/*判断输入的三边是否能构成三角形，以及构成怎样的三角形*/
#include <stdio.h>
int main(void){
	int a, b, c;
	printf("请输入三角形三边：\n");
	printf("a=");scanf("%d",&a); 
	printf("b=");scanf("%d",&b); 
	printf("c=");scanf("%d",&c); 
	if((a-b)<c && (b-c)<a && (c-a)<b){
		if(a<=0 || b<=0 || c<=0){
			printf("%d",0);
		}else 
		if((a==b) || (a==c) || (b==c)){
			if((a==b) && (b==c)){
				printf("%d",1);
			}else printf("%d",2);
		}else printf("%d",3);
	}else printf("%d",0);
	return 0;
} 