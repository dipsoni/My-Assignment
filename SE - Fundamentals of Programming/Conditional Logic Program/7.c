#include<stdio.h>
main()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d",&marks);
	
	if(marks>=35){
		printf("You are Pass",marks);
	}else{
		printf("You are fail");
	}
	
}
