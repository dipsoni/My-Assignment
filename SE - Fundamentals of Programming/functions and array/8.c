#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int i, j, len;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    // Reverse the string
    for (i = len - 1; i >= 0; i--) {
    	reversedStr[j] = str[i];
    }
    
    if (strcmp(str, reversedStr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

