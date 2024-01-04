#include<stdio.h>
int main()
{
	int n[5],sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&n[i]);		
	}
	for(i=0;i<5;i++)
	{
		sum+=n[i];
	}
	printf("\nSum of Array : %d",sum);
}

