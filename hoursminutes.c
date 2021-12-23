#include<stdio.h>
void main()
{
	int totalminutes,hours,minutes;
	printf("enter minutes");
	scanf("%d",&totalminutes);
	hours=totalminutes/60;
	minutes=totalminutes%60;
	printf("%d hours %d minutes",hours,minutes);
}
