#include<stdio.h>
#include<math.h>
double square();
int main(){
int n;

printf("Enter a number:\n");
scanf("%d",&n);
printf("The square of the number is:\n");
square(n);
return 0;
}
double square(int n){
    // squarepow(n,2);
    printf("%f\n",pow(n,2));
    
}

