#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = 0;
  	
  	int freq[256] = {0}; 
 
  	printf("Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] > freq[max])
		{
			max = i;
		}
	}
	printf("\n Character '%c' appears Maximum of %d Times in a Given String :  %s ", max, freq[max], str);
	
}
