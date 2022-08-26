// program to find roots of a quadratic equations
#include<stdio.h>
int main()
{
 float a,b,c,root1,root2,re,im,disc;
 scanf("%f %f %f",&a,&b,&c);
 disc= b*b-4*a*c;

 if(disc<0){
     printf("imaginary roots \n");
     re=-b/(2*a);

 }
else if(disc==0){
    printf("real and equal roots");
    re=-b/2*a;

}
else if(disc>0){
    printf("real and distinct roots");
}

return 0;
}