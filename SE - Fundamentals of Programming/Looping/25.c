#include<stdio.h>
main()
{
	int n,i,j,sum=0;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
	}
	printf("this is result : %d ",sum);

