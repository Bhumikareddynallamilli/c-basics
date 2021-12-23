#include<stdio.h>
void main()
{
	int n,sum,sum1,sum2;
	printf("enter n value");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	sum1=n*(n+1);
	sum2=n*n;
	printf("sum of 1st %d natural numbers is %d\n",n ,sum);
	printf("sum of 1st %d even natural numbers is %d\n",n,sum1);
	printf("sum of 1st %d odd natural numbers is %d\n",n,sum2);
}
