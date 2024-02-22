#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[15];
	int i;
	clrscr();
	printf("Enter the name :\n");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		{
			name[i]=name[i]-32;
		}
	}
	printf("%s\n",name);
	getch();
}