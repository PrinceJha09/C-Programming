#include<stdio.h>
#include<string.h>
int main(){
char s1[]="college wallah";
char s2[]="college wallah"; // s2 is a deep copy
s2[0]='l';
printf("%s\n%s",s1,s2);
    return 0;
}