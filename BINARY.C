#include<stdio.h>
#include<conio.h>
void strptn(char str[1000]);
void main()
{
	char line[1000];
	clrscr();
	printf("Enter the line :");
	gets(line);
	strptn(line);

	getch();
}

void strptn(char str[1000])
{
	int i,j;
	for(i=0;str[i];i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
}