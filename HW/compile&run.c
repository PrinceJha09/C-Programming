#include<stdio.h>
int main(){
    char a,b,c;
    char *p,*q,*r;
    p=&a;
    q=&b;
    c=q;
    r=p+c;
    printf("%d %d %d %d",c,r,q,p);
}