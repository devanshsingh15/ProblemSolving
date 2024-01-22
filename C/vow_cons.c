#include<stdio.h>
main()
{
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
}


