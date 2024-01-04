#include <stdio.h>

int main() {
    int n, sum = 0,i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);


    for (i=1;i<= n;i++) {
        
		printf("positive integer\n : ",i);
		sum += i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    
}

