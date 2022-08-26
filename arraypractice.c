// ques 1:
// #include<stdio.h>
// int main(){
// int arr[50],n,i,j,large,small;
// printf("Enter the number of elements:\n");
// scanf("%d",&n);
// printf("enter the numbers:\n");
// for(i=0;i<n;i++){
    // scanf("%d",&arr[i]);
    // small=arr[0];
    // large=arr[0];
// }
// for(i=1;i<n;i++){
// 
// 
// 
    // if(arr[i]<small){
        // small=arr[i];
    // }
    // else if(arr[i]>large){
        // large=arr[i];
    // }
// }
// printf("The smallest element is:%d",small);
// printf("The largest element is:%d",large);
// return 0;
// }
// 

// Ques 2:
// #include<stdio.h>
// int main(){
// int dig,n,i,prime;
// printf("Enter the number:\n");
// scanf("%d",&n);
// do{
    // prime=0;
    // dig=n%10;
    // if(dig==1||dig==0){
        // continue;
    // }
    // 
    // for(i=2;i<dig;++i){
        // if(dig%i==0){
            // prime++;
        // }
        // 
        // 
    // }
    // if(prime==0){
            // printf("%d\t",dig);
    // }
    // n=n/10;
// }while(n!=0);
// 
// 
// return 0;
// }
#include<stdio.h>
int main(){
int arr[50],i,s,j,prime;
printf("Enter the size of elements:\n");
scanf("%d",&s);
printf("Enter the elements:\n");
for(i=0;i<s;i++){
    scanf("%d",&arr[i]);

}
printf("The prime list is:\n");
for(i=0;i<s;i++){
    prime=0;
    for(j=2;j<arr[i];j++){
        if(arr[i]%j==0){
            prime++;
        }
    }
    if(prime==0){
        printf("%d\t",arr[i]);
    }
}
return 0;
}