#include<stdio.h>
int main()
{
int n,prime=0,comp=0,f=0;
int i=1;
printf("Input a number:\n");
do{
    f=0;
    scanf("%d",&n);
    

        if(i<n-1)
        {
            if(n%i==0)
            {
                f=f+1;
                i=i+1;
            }
        
            if(f=1)
            {
                prime=prime+1;
            }
            else if(f>=2)
            {
                comp=comp+1;
            }
        }
}while(n!=-1);
printf("Number of prime numbers:- %d",prime);
printf("Number of composite numbers:- %d",comp);

return 0;
}