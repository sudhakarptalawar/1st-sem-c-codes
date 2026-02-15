//vote eligibility

#include<stdio.h>
int main()
{
  int marks1, marks2, marks3,result;
  printf("enter your marks1");
  scanf("%d",& marks1);
  printf("enter your marks2");
  scanf("%d",& marks2);
  printf("enter your marks3");
  scanf("%d",& marks3);
  result=(marks1+marks2+marks3)/3;
  {
  if(marks1 <=33||marks2 <=33||marks3<=33)
  {
  printf(" you failed in exam");
  }
  if(result<=40)
  {
   printf(" you failed in exam");
  }
  else
  {
    printf("you passed exam");
  }
  }
  return 0;
}