#include<stdio.h>
int main(){
int a=1,b=3,c;
int *p,* q,* r;
p=&a;
q=&b;
c=q;
r=p+c;
    return 0;
}