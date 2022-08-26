// program to find number of digits in a given number
#include<stdio.h>
int main()
{
    int num,dcnt,rem;
    scanf("%d",&num);
    do
    {
        rem=num%10;
        num=num/10;
        dcnt++;
    }
    while(num>0);
    printf("the number of digits:- %d",dcnt);
    return 0;
}