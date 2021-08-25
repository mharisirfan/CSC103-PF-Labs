#include <stdio.h>
#include <stdlib.h>
void rgb2ycbcr(int r, int g, int b, float * y, float * Cr, float * Cb);
int main()

{
    int r,g,b;
printf("Enter value of Red");
scanf("%d", &r);
printf("Enter value of Green");
scanf("%d", &g);
printf("Enter value of Blue");
scanf("%d", &b);



 rgb2ycbcr(r,g,b,&r,&g,&b);
}

void rgb2ycbcr(int r, int g, int b, float * y, float * Cr, float * Cb)
{




*y=16+(0.257*r)+(0.504*g)+(0.098*b);

*Cr=128+ (-0.148*r)+(-0.291*g)+(0.439*b);

*Cb=128+ (0.439*r)+ (-0.368*g)+(-0.071*b);

printf("The Value of Y/Cr/Cb for the given R/g/b is %d / %d / %d",*y,*Cr,*Cb);
}



