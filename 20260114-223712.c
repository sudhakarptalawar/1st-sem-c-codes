#include<stdio.h>
struct student{
int rollno;
char name[20];
};
int main()
{
struct student stud[5];
int i,n;

  
    printf("enter no of students:");
    scanf("%d",&n);
    printf("\nenter student details\n");
    for(i=0;i<n;i++){
    printf("\nenter roll number:\n");
    scanf("%d",&stud[i].rollno);
    printf("enter name:");
    scanf("%s",&stud[i].name);
    }
    printf("\nstudents details are\n\n");
    for(i=0;i<n;i++){
    printf("student roll number is: %d\n",stud[i].rollno);
    printf("student name is: \033[042m%s\033[0m \n",stud[i].name);
    }
    return 0;
}