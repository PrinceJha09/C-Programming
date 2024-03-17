#include<stdio.h>
#include<string.h>
int main(){
char s1[]="college wallah";
char *s2=s1;  // known as shallow copy
s1[0]='m';
printf("%s",s2);
    return 0;
}