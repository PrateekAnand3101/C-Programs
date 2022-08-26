#include<stdio.h>
#include<string.h>

int main(){
int i;
const int MAX = 80;
char str1[]="Manipal Institute Of Technology";

char str2[MAX];

for(i=0;i<strlen(str1);i++){
    str2[i]=str1[i];
}
str2[i]= '\0';
printf("%s\n",str2);
return 0;
}