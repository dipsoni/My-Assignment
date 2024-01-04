//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main(){
	float l,w,h;
	
	printf("Enter your Length here : ");
	scanf("%f",&l);
	
	printf("Enter your Width here : ");
	scanf("%f",&w);
	
	printf("Enter your Height here : ");
	scanf("%f",&h);
	
    //Area of a rectangular prism  = 2*(wl+hl+hw) 
	printf("Area of a rectangular prism : %.2f", 2 * (w*l + h*l + h*w));
}
