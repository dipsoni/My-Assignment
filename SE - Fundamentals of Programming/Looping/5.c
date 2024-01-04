#include<stdio.h>
main()
{
	int n,i,fact;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact = fact * i;
	}
		printf("Factorial Number : %d",fact);
	}
