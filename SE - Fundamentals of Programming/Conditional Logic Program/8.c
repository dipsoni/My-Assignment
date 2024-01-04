#include<stdio.h>
main()
{
	int height;
	
	printf("Enter your Height(in cm) : ");
	scanf("%d",&height);
	
	if(height<150) {
		printf("Person is Short in Height");
	}else if (height>150 && height <=170){
		printf("Person is Average in Height");
	}else if (height>170 && height <=190){
		printf("Person is Tall in Height ");
	}else{
		printf("Person is Very Tall  in Height");
	}
}
