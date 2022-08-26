// Ques 1:
// #include<stdio.h>
// int main()
// {
// int num,rev,dig,n;
// printf("Enter a number:\n");
// scanf("%d",&num);
// n = num;
// rev = 0;
// while(num>0)
// {
    // dig = num% 10;
    // rev = rev * 10 + dig;
    // num= num/ 10;
// }
// if (n == rev)
// printf("\n\t GIVEN NO IS A PALINDROME");
// else
// printf("\n\t GIVEN NO NOT A PALINDROME");
// return 0;
// }

// Ques 2:
#include<stdio.h>
int main()
{
int n,prime=0,comp=0,f=0;

int i=1;
printf("Input a number:\n");
scanf("%d",&n);
do{
    if(n==1)
    {
    	printf("\n 1 is neither Prime nor Composite");
    	return 0;
	}

    for(i=2;i<(n/2);i++)
    {
        if(n%i==0){
            f=f+1;
            i=i+1;
        }
        
        else if(f==1){
            prime=prime+1;
        }
        else(f>=2);
        {
            comp=comp+1;
        }
    }
}while(n!=-1);
    printf("Number of prime numbers:- %d",prime);
    printf("Number of composite numbers:- %d",comp);

return 0;
}   

// Ques 3
// #include<stdio.h>
// int main(){
// int i,j,m,n,prod=1;
// printf("Enter the numbers:\n");
// scanf("%d %d",&m,&n);
// for(i=1;i<=n;i++){
    // for(j=1;j<=m;j++){
        // prod=i*j;
        // printf("%d",prod);
    // }
    // printf("\n");
// }
// return 0;
// }

// Ques 4:
// #include<stdio.h>
// int main(){
// int n,sum=0,rem,i;
// printf("Enter the number:\n");
// scanf("%d",&n);
// for(i=1;i<n;i++){
    // rem =n%i;
    // if(rem==0){
        // sum+=i;
    // }
// }
// if(sum=n){
    // printf("The number is a perfect number\n");
// }
// else{
    // printf("The number is not a perfect number\n");
// }
// return 0;
// }