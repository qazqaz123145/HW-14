#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a,b,c;
	printf("�п�J�@��:\n");
	scanf("%d",&a);
	printf("�п�J�@��:\n");
	scanf("%d",&b);
	printf("�п�J�@��:\n");
	scanf("%d",&c);
	
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	  
	  printf("�O�T����");
	else
	  printf("���O�T����");	 
	return 0;
}
