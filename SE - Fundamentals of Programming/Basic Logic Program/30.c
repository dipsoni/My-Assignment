//WAP to convert years into days and days into years

#include<stdio.h>
void main(){
	int year,days;
	
	printf("Enter a year : ");
	scanf("%d",&year);
	
	//for convert year into days 
	days= year*365;
	printf("In %d years is %d days",year,days);
	
	printf("\nEnter a days : ");
	scanf("%d",&days);
	
	//for convert days into year 
	year=days/365;
	printf("In %d days is %d year",days,year);
	
}
