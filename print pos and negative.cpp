#include<stdio.h>
main()
{
	int x;
	printf("enter value ");
	scanf("%d",&x);
	x>=0?printf("%dPositive",x):printf("%d negative",x);
}
