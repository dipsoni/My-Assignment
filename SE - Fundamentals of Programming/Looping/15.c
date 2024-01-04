#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	
	while(i<=10)
	{
	printf("Enter Number :");
	scanf("%d",&n); 
	
	sum  += n;  //sum = sum + n;
	i++;
	}
	
	printf("Sum of Numbers : %d",sum);
}
