#include<stdio.h>

struct mystructure{
	int a,b,c;
};
union myunion{
	int a,b,c;
};


main()
{
	
	printf("***Structure Demo***\n");
	
	struct mystructure s1;  //structure name

	printf("Enter Number A :");
	scanf("%d",&s1.a);
	printf("Enter Number B :");
	scanf("%d",&s1.b);
	printf("Enter Number C :");
	scanf("%d",&s1.c);
	printf("\nStructure Demo A :%d",s1.a);
	printf("\nStructure Demo B :%d",s1.b);
	printf("\nStructure Demo C :%d",s1.c);
	
	{
	printf("\n\n***Union Demo***\n");
	
	union myunion u1;   //for each variable declare union
	union myunion u2;   //or union myunion u1,u2,u3;
	union myunion u3;
    u1.a=10;
    u2.b=20;
    u3.c=30;
	printf("\nUnion Demo A :%d",u1.a);
	printf("\nUnion Demo B :%d",u2.b);
	printf("\nUnion Demo C :%d",u3.c);
	}
}


	




