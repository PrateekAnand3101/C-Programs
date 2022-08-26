// #include<stdio.h>
// int main(){
// float m1, m2, m3, m4, m5, sum;
// float avg1, avg2, avg3, avg4, avg5;
// m1 = 0;
// m2 = 0;
// m3 = 0;
// m4 = 0;
// m5 = 0;
// printf("enter the marks of five subjects for student1: ");
// scanf("%f %f %f %f %f",&m1, &m2, &m3, &m4, &m5);
// sum = m1+m2+m3+m4+m5;
// m1 += m1;
// m2 += m2;
// m3 += m3;
// m4 += m4;
// m5 += m5;
// printf("the sum is %f \n",sum);
// printf("enter the marks of five subjects for student2: ");
// scanf("%f %f %f %f %f",&m1, &m2, &m3, &m4, &m5);
// sum = m1+m2+m3+m4+m5;
// m1 += m1;
// m2 += m2;
// m3 += m3;
// m4 += m4;
// m5 += m5;
// printf("the sum is %f \n",sum);
// printf("enter the marks of five subjects for student3: ");
// scanf("%f %f %f %f %f",&m1, &m2, &m3, &m4, &m5);
// sum = m1+m2+m3+m4+m5;
// printf("the sum is %f \n ",sum);
// m1 += m1;
// m2 += m2;
// m3 += m3;
// m4 += m4;
// m5 += m5;
// 
// avg1 = m1/3;
// avg2 = m2/3;
// avg3 = m3/3;
// avg4 = m4/3;
// avg5 = m5/3;
// printf("the average for subject 1 is: %f \n",avg1);
// printf("the average for subject 2 is: %f \n",avg2);
// printf("the average for subject 3 is: %f \n",avg3);
// printf("the average for subject 4 is: %f \n",avg4);
// printf("the average for subject 5 is: %f \n",avg5);
// return 0;
// }
// #include<stdio.h>
// int main(){
// char str[150];
// int i, j;
// printf("Input the string: ");
// scanf("%s",str);
// for(i = 0; str[i]!='\0';i++)
// {
    // while(!((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z')||(str[i]=='\0')))
    // {
        // for(j=i;str[j]!='\0';j++)
        // {
            // str[j]=str[j+1];
        // }
        // str[j]='\0';
    // }
// 
// }
// printf("Output String: %s",str);
// return 0;
// }

// #include<stdio.h>
// int main(){
// char sent[200];
// int i,j;
// printf("Enter the sentence:");
// scanf("%s",sent);
// for(i=0;sent[i]!='\0';i++)
// {
    // if((sent[i]>='a'&& sent[i]<='z')||(sent[i]>='A' && sent[i]<='Z'))
    // {
        // if(sent[i]%2==0){
            // sent[i]='#';
        // }
        // else
        // {
            // sent[i]='%';
// 
        // }
    // }                                    
// }
// printf("the modified sentence is: %s",sent);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int n,a,temp;
// printf("Enter no. of integers: ");
// scanf("%d",&n);
// for(int i=0; i<=n; i++)
// {
    // scanf("%d",&a);
// }
// 
// 
// 
// return 0;
// }
// #include<stdio.h>
// int main(){
// struct student
// {
    // char studentId[20];
    // int rollNumber;
    // char studentName[50];
// }s1={
    // "abc", 123, "lallu"
// 
// };
// printf("%d %s %s",s1.rollNumber,s1.studentId,s1.studentName);
// return 0;
// }
#include<stdio.h>

    int f(int x){
  
       if (x<5)
  
        return x;
  
        printf("%d:", 248+x);
  
    return (f(--x));
  
    }
  
    int main(){
  
     printf("%d\n",11107+f(7));
return 0;
}