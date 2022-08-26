// program using switch case
#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a character:\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        printf("vowel");
        break;

        case 'e':
        printf("vowel");
        break;

        case 'i':
        printf("vowel");
        break;

        case 'o':
        printf("vowel");
        break;

        case 'u':
        printf("vowel");
        break;

        default:
        printf("not a vowel");

    }
    return 0;
}