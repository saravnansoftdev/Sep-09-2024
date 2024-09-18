#include<stdio.h>

int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch >=97 && ch<=122)
    {
        printf("entered data is Character - %c",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("entered data is Digit - %c",ch);
    }
    else
    {
        printf("entered data is Special character - %c",ch);
    }
    return;
}