//Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() 
{
    float salary, percentage, premium;

    printf("Enter salary : ");
    scanf("%f", &salary);
    
    printf("Enter Percentage : ");
    scanf("%f", &percentage);
    
    // for convert into % into decimal 10%=0.01
    percentage = percentage/100; 
    
    // Insurance Premium 
    premium = salary * percentage;
    printf("Insurance Premium : %.2f\n", premium);

}

