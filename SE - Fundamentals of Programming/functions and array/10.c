#include <stdio.h>

int Palindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;
    
    // Reversing the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    // Checking if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        return 1; // Palindrome
    } else {
        return 0; // Not Palindrome
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is palindrome using the function
    if (Palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
}

