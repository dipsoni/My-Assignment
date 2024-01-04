#include<stdio.h>

main()
{
	int n[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nYour Entered Number is %d : %d",i+1,n[i]);
	}
	
	for(i=4;i>=0;i--)
	{
		printf("\nReverse Number %d : %d",i+1,n[i]);
	}
	
}
