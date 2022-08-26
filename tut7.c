// program to find sum of natural numbers upto 100
#include<stdio.h>
int main()
{
    int n,sum;
    sum=0;
    n=1;

    while(n<=100)
    {
        sum+=n;
        n++;

    }
    printf("%d is the sum",sum);
    return 0;
}