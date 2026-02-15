// input word multiple times

#include<stdio.h>
int main()
{
    int i;
    char word[100];
    printf("write anything: ");
    gets(word);
    int n;
    printf("how many time you need that word: ");
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("%s\n",word);
    }
    return 0;
}