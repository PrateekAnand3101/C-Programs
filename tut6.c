// program to evaluate simple expressions using switch statements
#include<stdio.h>
int main()
{
    float val1,val2,result;
    char operator;

    printf("please enter the values:\n");
    scanf("%f %c %f",&val1,&operator,&val2);

    switch(operator)
    {
        case '+':
        result=val1+val2;
        printf("%f is the sum",result);
        break;

        case '-':
        result=val1-val2;
        printf("%f is the difference",result);
        break;

        case '*':
        result=val1*val2;
        printf("%f is the product",result);
        break;

        case'/':
        result=val1/val2;
        printf("%f is the quotient",result);
        break;

        default:
        printf("invalid operator");
    }

    return 0;
}