//Individual characters separated from the string


#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters separated from the string:\n");
    
    for (i = 0; str[i]= '\0'; i++) {
        printf("%c\n", str[i]);
    }
}

