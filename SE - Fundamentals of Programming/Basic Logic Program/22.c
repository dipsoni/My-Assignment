//Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P


#include<stdio.h>
#include<math.h>

main()
{
	float p,r,time,amount,c;
	
	printf("Enter Principal Amount : ");
	scanf("%f",&p);
	
	printf("Enter Rate of Interest (in percentage) : ");
	scanf("%f",&r);
	
	printf("Enter Time(in years) :");
	scanf("%f",&time);
	
	//Amount = principal(1 + Rate of interest/100)time
	amount = p *  ((pow((1 + r / 100), time))); 
	
	//compound interest = amount - principal 
	c = amount - p;
		
	printf("Compound Interest : %.2f",c);
	
	
}
