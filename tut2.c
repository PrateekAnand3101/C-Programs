// program to find the largest of the 3 numbers
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter the three numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2){
        if(n1>n3){
            printf("%d is the largest",n1);
        }
        else{
            printf("%d is the largest",n3);
        }
    }
    else if(n1<n2){
        if(n2>n3){
        printf("%d is the largest",n2);
        }
        else{
            printf("%d is the largest",n3);

        }
    }
    return 0;

}