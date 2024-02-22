#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n");
	printf("A=%d\n",a);
	printf("B=%d\n",b);
	getch();
}