#include<stdio.h>
main()
{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	//to check number is positive or negative
	if(n>0)
	{
		printf("%d is Positive",n);
	}else if (n<0)
	{
		printf("%d is Negative",n);
	}else
	{
		printf("The Number is zero",n);
	}
}
