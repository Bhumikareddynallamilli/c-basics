#include<stdio.h>
void main()
{
	int totalseconds,hours,minutes,seconds;
	printf("enter totalseconds");
	scanf("%d",&totalseconds);
	minutes=totalseconds/60;
	seconds=totalseconds%60;
	hours=minutes/60;
	minutes=minutes%60;
	
	printf("%dhours %dminutes %dseconds",hours,minutes,seconds);
}
