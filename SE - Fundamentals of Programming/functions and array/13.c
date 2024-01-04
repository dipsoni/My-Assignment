#include<stdio.h>
int main()
{
	int n[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&n[i]);	
		
	}
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			printf("\nNumber %d is Even",i+1);
		}
		else
		{
			printf("\nNumber %d is Odd",i+1);
		}
    }   
}

