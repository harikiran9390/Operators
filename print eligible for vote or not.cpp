#include<stdio.h>
main()
{
	int x;
	printf("enter age");
	scanf("%d",&x);
	x>18?printf("eligible for vote",x):printf("not eligible for vote",x);
}
