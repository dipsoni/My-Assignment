//Calculate compound interest

#include<stdio.h>

main()
{
	int principal,rate,time;
	float interest;
	
	printf("Enter the principal amount :");
	scanf("%d",&principal);
	
	printf("Enter the rate of interest (per annum) :");
	scanf("%d",&rate);
	
	printf("Enter the time (in years) :");
	scanf("%d",&time);
	
	// simple interst = (p*r*t)/100
	interest=(principal*rate*time)/100;
	
	printf("compound interest %.2f",interest);
}
