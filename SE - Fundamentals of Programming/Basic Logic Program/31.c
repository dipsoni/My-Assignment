//Convert kilometers into meters

#include<stdio.h>
main()
{
	float km,m;
	
	printf("Enter Kilometer : ");
	scanf("%f",&km);
	
	//Kilometer to meter 
	m = km * 1000;
	printf("%.2f Kilometer = %.2f Meter",km,m);	
}
