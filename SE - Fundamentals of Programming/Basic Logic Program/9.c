//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
main(){
	float side1,side2,side3;
	
	printf("Enter your side1 here : ");
	scanf("%f",&side1);
	
	printf("Enter your side2 here : ");
	scanf("%f",&side2);
	
	printf("Enter your side3 here : ");
	scanf("%f",&side3);
	
    //Circumference of triangle = side1 + side2 + side3 
	printf("This  is your circumference : %.2f",side1+side2+side3);
}
