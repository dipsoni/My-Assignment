#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum += i;   //Natural number start from 1,2,3,4....,n
		i++;
	}
	printf("Sum of Natural Number : %d",sum);
}
