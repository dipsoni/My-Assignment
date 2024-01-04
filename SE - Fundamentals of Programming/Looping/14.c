#include<stdio.h>
main()
{
	int n,i=1,fact,l;
	
	for(l=1;l<=5;l++)
	{
	printf("Enter Number :");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		fact = fact * i;//factorial condition
		i++;
	}
		printf("Factorial Number :%d\n",fact);
}
}
