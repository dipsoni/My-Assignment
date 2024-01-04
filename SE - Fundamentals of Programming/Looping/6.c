#include<stdio.h>
main()
{
	int i,n,t1=0,t2=1,next;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	//fiboncci series start from 0 and 1
	for(i=1;i<=n;i++)
	{
		printf("  %d,",next);
		t1=t2;           
		t2=next;		
		next=t1+t2;
	}
}
