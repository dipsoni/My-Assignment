#include <stdio.h>

int main() {
    int math;
    float a1, a2;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &math);

        if (math >= 1 && math <= 4) {
            printf("Enter first number: ");
            scanf("%f", &a1);
            printf("Enter second number: ");
            scanf("%f", &a2);

            switch (math) {
                case 1:
                    printf("Result: %.2f\n", a1 + a2);
                    break;
                case 2:
                    printf("Result: %.2f\n", a1 - a2);
                    break;
                case 3:
                    printf("Result: %.2f\n", a1 * a2);
                    break;
                case 4:
                    if (a2 != 0) {
                        printf("Result: %.2f\n", a1 / a2);
                    } else {
                        printf("Error! Division by zero.\n");
                    }
                    break;
            }
        } else if (math == 5) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid input. Please enter a valid option.\n");
        }
    }

}

