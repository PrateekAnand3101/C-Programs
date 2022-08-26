// #include<stdio.h>
// int main()
// {
    // int n, prime=0, comp=0, f, i;
    // printf("Enter numbers\n");
    // do
    // {
        // f=0;
        // scanf("%d",&n);
        // for(i=1; i<n; i++)
        // {
            // if(n%i==0)
            // {
                // f=f+1;
            // }
        // }
        // if(f==1)
        // {
            // prime+=1;
        // }   
        // else if(f>=2)
        // {
            // comp+=1;
        // } 
        // 
    // } while (n!=-1);
    // printf("prime= %d and comp= %d", prime, comp);
    // return 0;
// }
// #include<stdio.h>
// int main(){
// int n,j,k,prime=0,sum=0,i,rem,f=0;
// printf("Enter the number:\n");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
    // printf("%d\t",i);
// }
// for(j=2;j<i;j++){
    // f=0;
    // rem=i%j;
    // if(rem==0){
        // f=f+1;
    // }
// }
// 
// return 0;
// }
// #include<stdio.h>
// int main(){
// int a,b,i,n,prime=0,rem;
// printf("Enter the two limits:\n");
// scanf("%d %d",&a,&b);
// while(a<n<b){
    // for(i=2;i<n;i++){
        // if(n%i==0){
            // printf("d",n);
        // }
        // 
    // }
// 
// }
// return 0;
// }
#include <stdio.h>
int main()
{
    int i, t, j, a[50], temp, n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    char ch;
    printf("Enter a for ascending and d for descending\n");
    scanf("%s", &ch);
    switch(ch)
    {
        case 'a':
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(a[i]>a[j])
                    {
                        temp= a[i];
                        a[i]=a[j];
                        a[j]= temp;
                    }
                }
            }
            printf("Ascending order:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d", a[i]);
            }
            break;
        
        
        case 'd':
        
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(a[i]<a[j])
                    {
                        temp= a[i];
                        a[i]=a[j];
                        a[j]= temp;
                    }
                }
            }
            printf("Descending order:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d", a[i]);
            }
            break;
        
        
        default:
        printf("Invalid input");
    }
    
    return 0;
}