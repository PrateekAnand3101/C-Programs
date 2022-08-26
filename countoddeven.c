// program to count the number of odd and even digits
#include<stdio.h>
int main(){

int n,ecnt,ocnt,rem;
printf("enter a number:- ");
scanf("%d",&n);
do{
    rem=n%10;
    n=n/10;
    
    if(rem%2==0){
        ecnt++;
    }
    else{
    ocnt++;
    }
}while(n>0);

printf("%d even and %d odd digits",ecnt,ocnt);

return 0;
}