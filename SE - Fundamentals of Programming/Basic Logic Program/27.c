//Convert days into months

#include<stdio.h>
main()
{
	int d,m;
	
	printf("Enter days : ");
	scanf("%d",&d);
	
	// for convert days into months = days/12
	m =d*0.03287;
	
	printf("This is your month :%d",m);
}
