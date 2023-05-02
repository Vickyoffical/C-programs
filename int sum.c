#include <stdio.h>
#include <conio.h>

int main() 
{
    int a, b, c;
    clrscr();
    printf("enter the first number:\n");
    scanf("%d",&a);
    printf("enter the second number:\n");
    scanf("%d",&b);
    c=a+b;
    printf("the sum of %d and %d is %d \n",a,b,c);
    getch();
    
} 