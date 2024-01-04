//Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	float a,b,c,d,e,f,avg;
	
	printf("Enter the First Expense :");
	scanf("%f",&a);
	
	printf("Enter the Second Expense :");
	scanf("%f",&b);
	
	printf("Enter the Third Expense :");
	scanf("%f",&c);
	
	printf("Enter the Fourth Expense :");
	scanf("%f",&d);
	
	printf("Enter the Fifth Expense :");
	scanf("%f",&e);
	
	//for average of five expense (a+b+c+d+e)/5
	avg = (a+b+c+d+e)/5;
	printf("Average expense : %.2f",avg);
		
}












