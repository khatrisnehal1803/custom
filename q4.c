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
		for(d=a;d<=4;d++)
		{
			printf("  ");
		}
		for(e=a;e<=4;e++)
		{
			printf("");
		}
		for(c=a;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}