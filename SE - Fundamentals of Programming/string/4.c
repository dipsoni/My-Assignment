//Total numbers of words

#include <stdio.h>

int main() {
    char str[100];
    int words = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[words] != '\0') {
        words++;
    }

    printf("total number of words: %d\n", words);
}

