#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	for(a=5;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		for(c=a;c<=4;c++)
		{
			printf("  ");
		}
		for(d=a;d<=4;d++)
		{
			printf("");
		}
		for(e=a;e>=1;e--)
		{
			printf("%d",e);
		}
		printf("\n");
	}
	
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		for(e=a;e<=4;e++)
		{
			printf("  ");
		}
		for(e=a;e>=1;e--)
		{
			printf("%d",e);
		}
		printf("\n");
	}
	
}