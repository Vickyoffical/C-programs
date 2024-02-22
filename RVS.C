#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	int i=0,j;
	clrscr();
	printf("Enter string :");
	gets(a);

	while(a[i]!='\0')
	{
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	getch();
}