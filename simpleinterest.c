#include<stdio.h>
void main()
{
	float prin,time,rate,simpleinterest;
	printf("enter prin value");
	scanf("%f",&prin);
	printf("enter time and rate value");
	scanf("%f%f",&time,&rate);
	simpleinterest=prin*time*rate/100;
	printf("simple interest is %.2f",simpleinterest);
	
}
