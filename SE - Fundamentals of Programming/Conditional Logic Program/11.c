#include<stdio.h>
main()
{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	//Check if the number is even or odd using the ternary operator
	(n%2==0) ? printf("%d is EVEN",n) : printf("%d is ODD",n);
}
