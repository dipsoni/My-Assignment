//Convert years into days and months

#include<stdio.h>
void main(){
	int days,month,year;
	
	printf("Enter a year :");
	scanf("%d",&year);
	
	//for convert year into days 
	days= year*365;
	printf("In %d years is %d days",year,days);
	
	//for convert year into 
	month=year*12;
	printf("\nIn %d years is %d month",year,month );
	
	
}
