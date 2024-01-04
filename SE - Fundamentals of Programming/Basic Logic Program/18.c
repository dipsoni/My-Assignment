//Calculate person’s Annual salary

#include<stdio.h>

main()
{
	int msalary,asalary;
	
	printf("Enter a Monthly Salary : ");
	scanf("%d",&msalary);
	
	//for annual salary = monthly salary * 12
    asalary = msalary * 12;
    printf("Annual Salary : %d",asalary);
}
