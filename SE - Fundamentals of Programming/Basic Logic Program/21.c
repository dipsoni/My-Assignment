//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>

main()
{
	int a,b,temp;
	
	printf("Enter Number A: ");
	scanf("%d",&a);
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	printf("\n\nSwapping Number With 3rd Variable\n");
	
	//for swapping number With 3rd variable
	temp=a;
	a=b;
	b=temp;
	
	printf("\nSwap Number a : %d",a);
	printf("\nSwap Number b : %d\n",b);
	
	printf("\n\nSwapping Number Without 3rd Variable\n");
	
	//for swapping number Without 3rd variable
	
	a = a + b;    
	b = a - b;   
	a = a - b;    
	
	printf("\nSwap Number a : %d",a);
	printf("\nSwap Number b : %d",b);
	
	
	
}
