//Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

#include<stdio.h>
main(){
	int a1,a2;
	printf("Enter your number here : ");
	scanf("%d",&a1);
	printf("Enter your number here : ");
	scanf("%d",&a2);
	
	printf("This is your addition %d:",a1+a2);
	
	printf("\nThis is your substraction %d:",a1-a2);
	
	printf("\nThis is your multiplication %d:",a1*a2);
	
	printf("\nThis is your division %d:",a1/a2);
	
	printf("\nThis is your modulo %d:",a1%a2);
}
