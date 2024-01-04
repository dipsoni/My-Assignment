#include<stdio.h>
main()
{
	char c;
	
	printf("Enter Character : ");
	scanf("%c",&c);
	
	switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
			printf("%c is Vowel",c);
			break;
		default :
			printf("%c is Consonant",c);
			break;
	}
}
