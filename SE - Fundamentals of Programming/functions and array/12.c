#include<stdio.h>
int main()
{
	char name[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Write name : ");
		//scanf("%s",&name[i]);	
		gets(name[i]);	
	}
	for(i=0;i<5;i++){
		printf("\nName %d : %s",i+1,name[i]);
    }   
}
