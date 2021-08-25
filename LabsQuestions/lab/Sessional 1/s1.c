#include <stdio.h>
#include <stdlib.h>

int main()
{char O;
double A,B;
printf("Select an operator(+,-,*,/)");
scanf("%c",&O);
printf("Enter First Number\n");
scanf("%lf",&A);
printf("Enter Second Number\n");
scanf("%lf",&B);
switch(O)
{
case '+':
    printf("%.1lf+%.1lf=%.1lf",A,B,A+B);
    break;

case '-':
    printf("%.1lf-%.1lf=%.1lf",A,B,A-B);
    break;
case '*':
    printf("%.1lf*%.1lf=%.1lf",A,B,A*B);
    break;
case '/':
    printf("%.1lf/%.1lf=%.1lf",A,B,A/B);
    break;
}





}

