#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a,b,c;
	printf("請輸入一邊:\n");
	scanf("%d",&a);
	printf("請輸入一邊:\n");
	scanf("%d",&b);
	printf("請輸入一邊:\n");
	scanf("%d",&c);
	
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	  
	  printf("是三角形");
	else
	  printf("不是三角形");	 
	return 0;
}
