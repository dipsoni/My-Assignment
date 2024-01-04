//Find circumference of Rectangle formula : C = 4 * a


#include<stdio.h>
main(){
	float length,width;
	
	printf("Enter your length here : ");
	scanf("%f",&length);
	
	printf("Enter your width here : ");
	scanf("%f",&width);
	
    //Circumference of rectangle = 2*(length + width)
	printf("This  is your Circumference : %.2f",2*(length+width));
}
