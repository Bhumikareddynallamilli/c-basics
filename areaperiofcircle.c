#include<stdio.h>
void main()
{
	float radius,area,perimeter;
	printf("enter radius value");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	perimeter=2*3.14*radius;
	printf("area of a circle when radius is %.2f\n",radius,area);
	printf("perimeter of a circle when radius is %.3f",radius,perimeter);
}
