#include<stdio.h>
main()
{
	int i,n,ev=0,od=0,evsum=0,odsum=0;
	
	 for (i=1;i<=10;i++)
	 {
	 	printf("Enter Number %d: ",i);
	 	scanf("%d",&n);
	 	
		if(n%2==0)
		{
			ev++;
			evsum+=n;
		}
		else
		{
			od++;
			odsum+=n;
		}
	 }
	printf("\nEven Count :%d\n",ev);
	printf("Odd Count :%d\n",od);
	printf("Even Sum :%d\n",evsum);
	printf("Odd Sum :%d\n",odsum);
}
