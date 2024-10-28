#include <stdio.h>
void main()
{
    char op;
    printf("enter the character");
    scanf("%c",&op);
    switch(op)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf("%c is a vowel",op);
    break;
    default:printf("%c is a consonant",op);
    break;
    }  }
