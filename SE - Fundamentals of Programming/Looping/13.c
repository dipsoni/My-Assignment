#include<stdio.h>
main()
{
	int n,i=1,fact;
	
	printf("Enter Number :");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		fact = fact * i;//factorial condition
		i++;
	}
		printf("Factorial Number :%d",fact);
}
