//3) Develop a C program to read and display your name using gets() & puts().

#include <stdio.h>
int main()
{
    char name[20];
    puts("Enter your name : ");
    gets(name);
    puts("Your name is :" );
    puts(name);
    return 0;
}