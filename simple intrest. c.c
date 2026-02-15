//simple intrest
#include<stdio.h>
int main() 
{
   float p,r,t;
   printf("enter the principle amount\n");
   scanf("%f",&p);
   printf("enter the rate\n");
   scanf("%f",&r);
   printf("enter time\n");
   scanf("%f",&t);
   printf("simple intrest is %f",(p*r*t)/100);
   return 0;
}