#include<stdio.h>
main()
{
	float cp,sp,p,l; //costprize,sellprize,profit,loss
		
	printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);
    
    
    if(sp>cp)
	{
	      p = sp - cp;//profit = selling prize - cost prize
		  printf("\nProfit : %.2f",p); 	     
	}
	else if(cp>sp)
	{
		  l = cp - sp;//loss = cost prize - selling prize
		  printf("\nLoss : %.2f",l);
	}
	else
	{
	      printf("\nNo Profit , No Loss");
	}
}
