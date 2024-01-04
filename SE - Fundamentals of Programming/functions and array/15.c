#include <stdio.h>

int main() {
    int n, i, choice,j;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int a1[n], temp;

    printf("Enter %d integers for array 1:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Enter 1 for ascending order");
    scanf("%d", &choice);

    if (choice == 1) {
        // for array 1 in ascending order
        for (i = 0; i < n - 1; i++) {
            for ( j = 0; j < n - i - 1; j++) {
                if (a1[j] > a1[j + 1]) {
                    // Swap arr1[j] and arr1[j+1]
                    temp = a1[j];
                    a1[j] = a1[j + 1];
                    a1[j + 1] = temp;
                }
            }
        }

       

        printf(" ascending order:\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Array 1: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a1[i]);
    }
    printf("\n");
}

