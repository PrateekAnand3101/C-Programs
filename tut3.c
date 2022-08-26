// program to calculate the grade for the marks entered
#include<stdio.h>
int main()
{
    int grade;
    printf("Enter the grade obtained:\n");
    scanf("%d",&grade);

    if(grade>=91){
        printf("grade A");
    }
    else if(grade>=81){
        printf("grade B");
    }
    else if(grade>=71)
{
    printf("grade C");
}
else if(grade>=61){
    printf("grade D");
}
    return 0;
}