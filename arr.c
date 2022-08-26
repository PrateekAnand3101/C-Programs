// #include<stdio.h>
// int main(){
    // int arr[50],n,i,j;
    // printf("enter number of elements:\n");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
        // scanf("%d",&arr[i]);
    // }
    // for(j=0;j<n;j++){
        // printf("%d",arr[j]);
        // printf("\t");
    // }
// 
// return 0;
// }
#include<stdio.h>
int main(){
int arr[50],i,n,j,f=0;
printf("Enter a number:\n");
for(i=1;i<n;i++){
    scanf("%d",&arr[i]);
    for(j=2;j<i;j++){
        if(arr[i]%j==0){
            f++;
        }
    }
    
}
if(f==0){
    printf("%d",arr[i]);
}

return 0;
}