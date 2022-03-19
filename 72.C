#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
clrscr();
printf("ARYAN THAKUR");
fun();
getch();
}
void fun()
{int a,b,c;
printf("\n enter the value of a  and b:");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum =%d",c);}