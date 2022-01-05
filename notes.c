#include<stdio.h>
void main()
{
	int amount,a2000,a500,a200,a100,a50,a20,a10,a5,a2,a1;
	printf("enter amount");
	scanf("%d",&amount);
	a2000=amount/2000;
	amount=amount%2000;
	a500=amount/500;
	amount=amount%500;
	a200=amount/200;
	amount=amount%200;
	a100=amount/100;
	amount=amount%100;
	a50=amount/50;
	amount=amount%50;
	a20=amount/20;
	amount=amount%20;
	a10=amount/10;
	amount=amount%10;
	a5=amount/5;
	amount=amount%5;
	a2=amount/2;
	amount=amount%2;
	a1=amount/1;
	amount=amount%1;
	printf("2000 notes-%d\n",a2000);
	printf("500notes-%d\n",a500);
	printf("200notes-%d\n",a200);
	printf("100notes-%d\n",a100);
	printf("50notes-%d\n",a50);
	printf("20notes-%d\n",a20);
	printf("10notes-%d\n",a10);
	printf("5coins-%d\n",a5);
	printf("2coins-%d\n",a2);
	printf("1coins-%d\n",a1);
}

