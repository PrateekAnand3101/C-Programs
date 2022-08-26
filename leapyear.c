// program to find if a year is a leap year
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:- \n");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0){
        
        
                printf("%d is a leap year",year);
        
    }
    else if(year%100==0 && year%400==0){

        printf("%d is a leap year",year);

    }
    else{
        printf("%d is not a leap year",year);
    }
    
    return 0;
}

