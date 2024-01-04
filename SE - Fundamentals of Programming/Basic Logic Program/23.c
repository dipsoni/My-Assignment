//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

main()
{
	int n1,n2;
	
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	printf("\n\nSwapping Number With Multiplication anf Division\n");
	
	//swapping number from multiplication and divison

	n1 = n1 * n2;    
	n2 = n1 / n2;    
	n1 = n1 / n2;   
	
	printf("\nSwap Number n1 : %d",n1);
	printf("\nSwap Number n2 : %d",n2);
}
