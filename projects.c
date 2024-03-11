#include<stdio.h>
#include<conio.h>
int main()
{
    //program to find lowercase or not
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
    {
        printf("is lowercase");
    }
    else
    {
        printf("is not lowercase");
    }
    
   return 0;
    }
