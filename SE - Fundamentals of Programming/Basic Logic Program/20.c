//Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
	float ms,ip,li,rs,as;
	
	printf("Enter Monthly Salary : ");
	scanf("%f",&ms);
	
	//Insurance premium 10%
	ip = 0.1 * ms;
	
	printf("Insurance Premium : %.2f",ip);
	
	//Loan installment 10% 
	li = 0.1 * ms;
	
	printf("\nLoan Installment : %.2f",li);
	
	// Remaining Salary 
	rs = ms - ip - li;
	
	printf("\nRemaininf Salary : %.2f",rs);
}
