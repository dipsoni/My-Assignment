///Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float f,c;
	
	printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    
    // Convert celsius = (fahrenheit - 32) * 5 / 9;
    c = (f - 32) * 5 / 9;
    
    printf("\nTemperature in Celsius: %.2f\n", c);
}
