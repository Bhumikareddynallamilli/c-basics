#include<stdio.h>
void main()
{
	int h,m,a,b,tm;
	printf("enter h,m value");
	scanf("%d%d",&h,&m);
	a=h*60;
	b=a+m;
	printf("totalminutes are %d",b);
}
