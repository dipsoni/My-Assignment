#include<stdio.h>
#include<string.h>
main(){
	char a[]="jaydeep";
	char b[]="tank";
	char c[]="jaydeep";
	
	int r = strcmp(a,b);  //comparison string  (strcmp)
	int r1 = strcmp(b,c);
	
	printf("%d",r);
	printf("\n%d",r1);
	
}
