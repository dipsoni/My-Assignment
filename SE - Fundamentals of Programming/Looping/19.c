#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
	{
		printf("%d",j%2); //for printing 1 and o alterante 
	}
	printf("\n");  //To print pattern in next line
}
}


/* j only         i only     	i%2
1                 1          	1
12				  22         	00 
123				  333        	111
1234			  4444       	0000
12345			  55555      	11111
   

*/
