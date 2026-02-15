#include<stdio.h>
int main()
{
  int a=10,b=20,c=30,d=40;
  if(a>b && a>c && a>d){
  printf("the greatest number is %d",a);
  }
  else if (b>a && b>c && b>d){
  printf("the greatest number is %d",b);
  }
  else if(c>a && c>b && c>d){
  printf("the greatest number is %d",c);
  }
  else if(d>a && d>b && d>c){
  printf("the greatest number is %d",d);
  }
  return 0;
}