// program to check for palindrome
#include<stdio.h>
int main()
{
    int n,dig,rev;

    printf("enter the number: \n");
    scanf("%d",&n);

    while(n>0){
    dig=n%10;
    rev=rev*10+dig;
    n=n/10;
    }
    if(n==rev){
        printf("\n GIVEN NO IS A PALINDROME");
     } else{
        printf("\n GIVEN NO IS NOT A PALINDROME");

    }
    return 0;
}