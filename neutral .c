#include<stdio.h>

main()

{
	int a;
	
	printf("value of a=");
	scanf("%d",&a);
	if(a<0)
	{
		printf("value is negetive");
	}
	
	else if(a==0)
	{
		printf("value is neutral");
		
	}
	else if(a>0)
	{
		printf("value is positive");
	}
}
