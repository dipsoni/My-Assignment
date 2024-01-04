#include <stdio.h>

int main() {
    int i,j,n=65;

    for (i=1;i<=5;i++) {
        for (j = 1; j <= i; j++)
		 {
            // Print characters in alphabetical order
            printf("%c", n + j - 1);
        }
        
        printf("\n");// To print in new line
    }
}
/* A:65+ 1 -1=A
     65+ 2 -1=AB
     65+ 3 -1=ABC
     65+ 4 -1=ABCD
     65+ 5 -1=ABCDE*/
