#include<stdio.h>
main()
{
	int a,b,choice;
    
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    
    printf("\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division");

    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    
    switch(choice){
    	case 1:
    		printf("\nAddition :%d",a+b);
    		break;
	    case 2:
		    printf("\nSubstraction :%d",a-b);
		    break;
		case 3:
		    printf("\nMultiplication :%d",a*b);
		    break;
		case 4:
		    printf("\nDivision :%d",a/b);	 
		    break;
		default:
		    printf("\nInvalid Choice");    
}
} 

