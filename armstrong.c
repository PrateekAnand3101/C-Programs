// program to find armstrong nos. for a given limit 'n'
#include<stdio.h>
#include<math.h>

int main(){

int lim,n;
printf("enter the limit:- ");
scanf("%d",&lim);
n=1;
do{
    int sum=0;
    int num=n;
    do{
        int dig=num%10;
        sum=sum+pow(dig,3);
        num=num/10;

    }while(num>0);
    
    if(sum==n){
        printf("%d\n\t",n);
        n++;
    }

}while(n<lim);
return 0;
}