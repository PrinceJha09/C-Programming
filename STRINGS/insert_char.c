#include<stdio.h>
int main(){
char s1[]="prince";
printf("%s",s1);
//1st index pe o lga dena h
for(int i=5;i>=1;i--){
    s1[i+1]=s1[i];
}
s1[1]='o';
printf("\n%s",s1);
    return 0;
}