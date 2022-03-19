#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ch;
clrscr();
printf("\n NAME=ARYAN TAHKUR");
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n arithematic function");
printf("\n 1.addition");
printf("\n 2.subtract");
printf("\n 3.multiply");
printf("\n 4.divide");
printf("\n 5.modulas");
printf("\n enter your choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
c=a-b;
printf("%d",c);
break;
case 3:
c=a*b;
printf("%d",c);
break;
case 4:
c=a/b;
printf("%d",c);
break;
case 5:
c=a%b;
printf("%d",c);
default:
printf("wrong output");
}
getch();
}














