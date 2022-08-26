// program to reverse the digits of a number
#include<stdio.h>
int main()
{
    int n,rev=0,right_digit;
    printf("Enter a number: \n");
    scanf("%d",&n);

    while(n!=0)
    {
        right_digit=n%10;
        rev=rev*10+right_digit;
        n=n/10;
    }
    printf("%d is the reversed number",rev);
    return 0;
}