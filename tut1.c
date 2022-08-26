// program to find largest of the two numbers
#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the 2 numbers:\n");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("%d",a);
        printf(" is the larger number");

    }
    else if (a<b)
    {
        printf("%d",b);
        printf(" is the larger number");
    }
    return 0;
}