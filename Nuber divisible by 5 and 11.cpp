#include<stdio.h>
//number is divisible by 5 or 11
main()
{
	int x;
	printf("enter number");
	scanf("%d",&x);
	if(x%5==0 ||x%11==0)
	{
		printf("divisible");
		
	}
	else
	{
		printf("not divisible");
	}
}
