#include<stdio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("enter length and breadth value");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("area of rectangle is %d\n",area);
	printf("perimeter of rectangle is %d",perimeter);
	
}
