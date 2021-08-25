#include <stdio.h>
#include <stdlib.h>

int main()
{char v;
double c,d;
printf("Select an operator(+,-,*,/)");
scanf("%c",&v);
printf("Enter First Number\n");
scanf("%lf",&c);
printf("Enter Second Number\n");
scanf("%lf",&d);
switch(v)
{
case '+':
    printf("%.11f+%.11f=%.11f",c,d,c+d);
    break;

case '-':
    printf("%.11f-%.11f=%.11f",c,d,c-d);
    break;
case '*':
    printf("%.11f*%.11f=%.11f",c,d,c*d);
    break;
case '/':
    printf("%.11f/%.11f=%.11f",c,d,c/d);
    break;
}





}

