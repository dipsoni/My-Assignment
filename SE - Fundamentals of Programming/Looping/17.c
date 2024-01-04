#include<stdio.h>
main()
{
	int i=1,n,evencount=0,oddcount=0;
	
	while(i<=5)
	{
		printf("Enter Number : ");
		scanf("%d",&n);
		i++;
		
		//condition to check even or odd
		if(n%2==0)
		{
			evencount++; //evencounter
		}
		else
		{
			oddcount++; //oddcounter
		}
	}
	
	printf("Evencount : %d",evencount);
	printf("\nOddcount : %d",oddcount);

}
