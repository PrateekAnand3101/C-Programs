// program to count the even and odd digits of a given number
#include<stdio.h>
int main()
{
    int num,rem,ecnt,ocnt;
    scanf("%d",&num);
    do{
        rem=num%10;
        num=num/10;
        if(rem%2==0){
            ecnt++;
        }
        else
        {
            ocnt++;
        }
    }while(num>0);

    printf("%d even digits and %d odd digits",ecnt,ocnt);
    return 0;
}