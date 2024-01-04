//Accept 5 employees name and salary and count average and total salary

//Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
{
	char n1,n2,n3,n4,n5;
	float s1,s2,s3,s4,s5,average,totalsalary;
	
	printf("Enter name of employee 1: ");
    scanf("%s", &n1);
    printf("Enter salary of employee 1: ");
    scanf("%f", &s1);	
    
	printf("\nEnter name of employee 2: ");
    scanf("%s", &n2);
    printf("Enter salary of employee 2: ");
    scanf("%f", &s2);
    	
	printf("\nEnter name of employee 3: ");
    scanf("%s", &n3);
    printf("Enter salary of employee 3: ");
    scanf("%f", &s3);
    	
	printf("\nEnter name of employee 4: ");
    scanf("%s", &n4);
    printf("Enter salary of employee 4: ");
    scanf("%f", &s4);
    	
	printf("\nEnter name of employee 5: ");
    scanf("%s", &n5);
    printf("Enter salary of employee 5: ");
    scanf("%f", &s5);
    
    
    //for average salary 
    average = (s1+s2+s3+s4+s5)/5;
    
    printf("\n\nAverage Salary : %.2f\n",average);
    
    //for Total salary = s1+s2+s3+s4+s5
    totalsalary = s1+s2+s3+s4+s5;
	     
    printf("\nTotal Salary : %.2f",totalsalary);
	 
    
    
    
    
    
}
