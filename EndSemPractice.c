// #include<stdio.h>
// int perfect(int a[][10],int m,int n)
// {
//     int plus=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             int p=1,num,sum=0;
//             while(p<num)
//             {
//                 if(num%p==0)
//                 {
//                     sum+=i;
//                     i++;
//                 }
//             }   
            
//             if(sum==num)
//             {
//                 plus+=a[i][j];
//             }
//         }
//     }
// return(plus);

// }

// int IsPrime(int a[][10],int m,int n)
// {
//     int fact=1;
//     for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 int f=0;
//                 for(int k=1;k<a[i][j];k++)
//                 {
//                     if(a[i][j]%k==0)
//                     {
//                         f++;
                        
//                     }
//                 }
                
//                 if(f==1)
//                 {
//                     fact=fact*a[i][j];
//                 }

//             }
//         }
//         return(fact);
// }
// int main(){
// int m,n,i,j,a[10][10];
// printf("Enter the dimensions of a:\n");
// scanf("%d %d",&m,&n);
// printf("Enter the elements:\n");
// for(i=0;i<n;i++)
// {
//     for(j=0;j<m;j++)
//     {
//         scanf("%d",&a[i][j]);
//     }
// }
// printf("The matrix is:\n");
// for(i=0;i<n;i++)
// {
//     for(j=0;j<m;j++)
//     {
//         printf("%d\t",a[i][j]);
//     }
//     printf("\n");
// }
// perfect(a,m,n);
// IsPrime(a,m,n);
// printf("The matrix after replacement:\n");
// for(i=0;i<n;i++)
// {
//     for(j=0;j<m;j++)
//     {
//         printf("%d\t",a[i][j]);
//     }
//     printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int perfect(int a)
// {
//     int sum=0, i;
//     for(i=1; i<=a; i++)
//     {
//         if(a%i==0)
//         {
//             sum+=i;
//         }
//     }
//     if(sum==a)
//     {
//         return 1;
//     }
//     else 
//     {
//         return 0;
//     }
// }
// int prime(int a)
// {
//     int f=0, i;
//     for(i=1; i<a; i++)
//     {
//         if(a%i==0)
//         {
//             f++;
//         }
//     }
//     if(f==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int r, c, i, j, num, sum, rev;
//     printf("enter rows and columns\n");
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     printf("enter elements\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("matrix is\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             if(perfect(a[i][j]))
//             {
//                 printf("asaojfskd\n");
//                 num=a[i][j];
//                 while(num!=0)
//                 {
//                     rev=num%10;
//                     sum=sum+rev;
//                     num=num/10;
//                 }
//                 a[i][j]=sum;
//             }
//             else if(prime(a[i][j]==1))
//             {
//                 int f=1;
//                 for(i=1; i<=a[i][j]; i++)
//                 {
//                     f=f*i;
//                 }
//                 a[i][j]=f;
//             }
//         }
//     }
//     printf("matrix is\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//      return 0;
    
// }

#include<stdio.h>
int even(int a)
{
    if(a%2==0)
    return 1;
    else 
    return 0;
}
int prime(int a)
{
    int f=0, i;
    for(i=1; i<a; i++)
    {
        if(a%i==0)
            f++;
    }
    if(f==1)
    {return 1;}
    else
    {return 0;}
}
int main()
{
    int r, c, i, j, num, sum, rev,fact;
    printf("enter rows and columns\n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("enter elements\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(even(a[i][j]))
            {
                int sum=0;
                num=a[i][j];
                while(num!=0)
                {
                    rev=num%10;
                    sum=sum+rev;
                    num=num/10;
                }
                a[i][j]=sum;
            }
            if(prime(a[i][j]))
            {
                int fact=1;
                for(i=1;i<a[i][j];i++)
                {
                    fact= fact*a[i][j];
                }
                a[i][j]=fact;
            }
        }
    }
    printf("matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
     return 0;
    
}