#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("\n NAME=ARYAN THAKUR");
printf("\n eneter the temperaturein degree in fahernite=");
scanf("%f",&f);
c=(f-32)*5/9;
printf("\n the temperature in degree celcius=%f",c);
getch();
}