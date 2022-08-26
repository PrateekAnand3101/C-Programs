// #include<stdio.h>
// int main(){
// char str[200];
// int i, words=1;
// printf("Enter the sentence\n");
// gets(str);
// for(i=0;str[i]!='\0';i++)
// {
    // if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
    // {
        // words++;
    // }
// }
// printf("The total words are: %d \n",words);
// return 0;
// }


// #include<stdio.h>
// int main(){
// char str[200];
// int i;
// printf("Enter the string:\n");
// gets(str);
// for(i=0;str[i]!='\0';i++)
// {
    // if(str[i]>='A' && str[i]<='Z'){
        // str[i]+=32;
    // }
    // else if(str[i]>='a' && str[i]<='z'){
        // str[i]-=32;
    // }
// }
// printf("The modified string is:\n");
// puts(str);
// return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//  
// int main ()
// {
	// char str[50], str1[50], td[20][30];
	// int i = 0, j = 0, k = 0, x = 0, y = 0;
//  
	// printf ("Enter The Main String:\n");
	// gets (str);
//  
	// printf ("Enter A Word To Be Removed From The Main String:\n");
	// gets (str1);
	// for (i = 0; str[i] != '\0'; i++)
	// {
		// if (str[i] == ' ')
		// {
			// td[k][j] = '\0';
			// k ++;
			// j = 0;
		// }
		// else
		// {
			// td[k][j] = str[i];
			// j ++;
		// }
	// }
//  
	// td[k][j] = '\0';
//  
	// j = 0;
// 
	// for (i = 0; i < k + 1; i++)
	// {
		// if (strcmp(td[i], str1) == 0)
		// {
			// td[i][j] = '\0';
		// }
	// }
//  
	// j = 0;
//  
	// for (i = 0; i < k + 1; i++)
	// {
		// if (td[i][j] == '\0')
			// continue;
		// else
			// printf ("%s ", td[i]);
	// }
//  
	// printf ("\n");
//  
	// return 0;
// }   

// 
// #include<stdio.h>
// int isPrime()
// int main(){
// int i,n,prime,f,j;
// printf("Enter the value of n:\n");
// scanf("%d",&n);
// printf("%d prime numbers are:\n",n);
// for(i=0;i<n;i++)
// {
	// for(j=2;j<i;j++)
	// {
		// if(i%j==0)
		// {
			// f++;
		// }
// 
	// }
	// if(f==1)
	// {
		// printf("%d",i);
	// }
	// 
// }

// 
// return 0;
// }

#include<stdio.h>
#include<math.h>
int fact(int a){
	int n,f=1;
	for(n=1;n<=a;n++){
		f=n*f;
		
	}
	return(f);
}
int main(){
int N,a,r,f,f1,f2,nCr;
printf("Enter N and r:\n");
scanf("%d %d",&N,&r);
f= fact(N);
f1= fact(r);
f2= fact(N-r);
nCr=f/(f1*f2);
printf("Computed nCr of the given number is : %d",nCr);



return 0;
}

#include<stdio.h>
char isPalin(char *str){
	int i,c=0,n;
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		if(str[i]==str[n-i-1])
		{
			c++;
		}
	}
	if(c==i)
		return i;
	else 
		return 0;
}
int main(){
char str[200],i;
printf("Enter the string:\n");
gets(str);
if(isPalin(str)){
	printf("It is a palindrome\n");
}
else
	printf("It is not a palindrome\n");
return 0;
}