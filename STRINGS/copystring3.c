#include<stdio.h>
#include<string.h>
int main(){
char *s1="college wallah";
char *s2;
s2 =s1;
s1="mollege wallah";
printf("%s\n%s",s1,s2); // both are different
    return 0;
}