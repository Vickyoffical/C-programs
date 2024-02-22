#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c=0;
	clrscr();
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d number is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	getch();
}