// program to find sum of natural numbers upto a given number
// method 1;

#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter a number:\n");
    scanf("%d",&n);
    sum=0;
 
 for(i=1;i<=n;i++){
     sum=sum+i;
      }
 printf("%d is the sum",sum);
 return 0;
}


// method 2;
#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter a number: \n");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("%d is the sum",sum);
    return 0;
}