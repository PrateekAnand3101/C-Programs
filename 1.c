// #include <stdio.h>
// int main ()
// {
// int prime_sum = 0, n;
// printf ("Enter the value of n: ");
// scanf ("%d", &n);
// for (int i=1; i<=n; i++)
// {
// printf ("%d ", i);
// int flag1 = 0;
// for (int j = 2; j < i; j++)
// {
// if (i%j == 0)
// flag1 = 1;
// }
// if (flag1 == 0 && i>1)
// prime_sum += i;
// }
// printf ("\nThe sum of the prime numbers until %d is: %d", n, prime_sum);
// int flag2 = 0;
// for (int k = 2; k < prime_sum; k++)
// {
// if (prime_sum%k == 0)
// flag2 = 1;
// }
// if (flag2 == 0 && prime_sum>1)
// printf ("\nThe sum is prime");
// else
// printf ("\nThe sum is not prime");
// return 0;
// }
#include<stdio.h>
int main(){
int i,j,m,n,a[50][50],temp;
printf("Enter the number of rows and columns:\n");
scanf("%d %d",&m,&n);
printf("Enter the elements of the matrix:\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("the matrix is:\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(i==j){
            temp=a[i][j];
            a[i][j]=a[i][n-i-1];
            a[i][n-i-1]=temp;
        }
    }
}
printf("Matrix after changing the primary and secondary diagonals:\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

return 0;
}
