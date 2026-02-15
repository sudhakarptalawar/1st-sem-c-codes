#include<stdio.h>

int main()
{
    char first[50],last[50],full[100];
    int i=0,j=0,length=0;
    printf("enter first name");
    gets(first);
    printf("enter last name");
    gets(last);

    while(first[i]!='\0') {
        full[length]=first[i];
        i++;
        length++;
    }
    full[length]=' ';
    length++;

    while(last[j]!='\0') {
        full[length]=last[j];
        length++;
        j++;
    }
    full[length]='\0';

    printf(" full name is %s\n",full);
    printf("lenght is %d\n",length);
    
    if(length<20){
    printf("yes");
    }
    else{
    printf("no");
    }


    return 0;
}