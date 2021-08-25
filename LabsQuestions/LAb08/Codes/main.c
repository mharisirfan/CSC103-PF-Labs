#include<stdio.h>
#include"my_lib.h"


int main (void)
{   

   



	printf("Program to test color space conversion\n\n");

	printf("Testing color space conversion code: \n\n");
	if(test_code() == 0)
	   printf("\n\n Conversion Successful! Well Done!!\n");
	else
	   printf("\n\nOops! Conversion failed!!!\n\n");

}

void rgb2ycbcr(int r, int g, int b, int * y, int * cb, int * cr)
{
*y=(16+(0.257*r)+(0.504*g)+(0.098*b));

*cr=(128+ (-0.148*r)+(-0.291*g)+(0.439*b));

*cb=(128+ (0.439*r)+(-0.368*g)+(-0.071*b));



}

