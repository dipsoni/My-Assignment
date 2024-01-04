//Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	int n1,n2,sum;
	
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	// Calculate the sum
    sum = n1 + n2;
    
    printf("\nSum: %d\n", sum);

    // Check the size of the sum
    printf("Size of the sum : %d\n", sizeof(sum));
}
