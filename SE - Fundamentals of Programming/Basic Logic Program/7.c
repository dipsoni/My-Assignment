// Find area of Rectangle Formula : A=wl

#include<stdio.h>
main(){
	float length,width;
	
	printf("Enter your length here : ");
	scanf("%f",&length);
	
	printf("Enter your width here : ");
	scanf("%f",&width);
	
    //Area of rectangle = length * width
	printf("This  is your area : %.2f",length*width);
}
