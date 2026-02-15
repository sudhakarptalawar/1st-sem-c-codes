//tax income 
#include<stdio.h>
int main()
{
  int salary,tax;
  printf("what is your salary");
  scanf("%d",& salary);
  
  if(salary<250000){
  tax=0;
  }
  else if(salary>250000 && salary<5000000){
  tax=salary*(0.05);
  }
  else if (salary>500000 && salary<1000000){
  tax=salary*(0.20);
  }
  else{
  tax=salary*(0.30);
  }
  printf("your tax is %d",tax);
  return 0;
}