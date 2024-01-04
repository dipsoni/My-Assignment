//Convert minutes into seconds and hours

#include<stdio.h>
main(){
	int second,minute,hour;
	
	printf("Enter a Minutes : ");
	scanf("%d",&minute);
	
	//for convert mintues into seconds 
	second = minute * 60;
	printf("In %d minutes is %d seconds",minute,second);
	
	//for convert minutes into hour 
	hour = minute / 60;
	printf("\nIn %d minutes is %d hours",minute,hour);
	
}
