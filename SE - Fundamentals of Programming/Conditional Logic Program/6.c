#include<stdio.h>
main()
{
	char c;
	
	printf("Enter Character : ");
	scanf("%c",&c);
	
	// Check if the character is a vowel using switch statement
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
		     	 printf("%C is a vowel",c);
			     break;
			
		default:
			     printf("%c is not a vowel",c);
			     break;
				
	}
	
}
