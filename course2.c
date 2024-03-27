#include<stdio.h>
#include<math.h>
/*
Date: 29-10-2023
Author: Shreyansh_G
Program to get input between 0 and 1 (non inclusive)
*/
int main(void)
{
  double radians;
  double Result= 0;
  printf("Input a number betwen 0 and 1:");
  scanf("%lf",&radians);
  Result=sin(radians);
   if (0.00<radians && radians<1.00)
    {
     printf("\a The sine of %lf is %lf\n", radians, Result);
    }
   else
    {
      printf("You have written wrong information");
    }
 return 0; 
}
