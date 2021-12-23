#include<stdio.h>
void main()
{
	int num1,num2,sum,diff,prod,quot,remain;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	diff=num1-num2;
	prod=num1*num2;
    quot=num1/num2;
    remain=num1%num2;
    printf("sum of %d and %d is %d\n",num1,num2,sum);
    printf("diff of %d and %d is %d\n",num1,num2,diff);
    printf("prod of %d and %d is %d\n",num1,num2,prod);
    printf("quot of %d and %d is %d\n",num1,num2,quot);
    printf("remain of %d and %d is %d\n",num1,num2,remain);
}
