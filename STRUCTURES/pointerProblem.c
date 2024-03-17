#include<stdio.h>
int main(){
    typedef int* pointer;
int x=5,y=9;
// int* a=&x,b=&y;
pointer a=&x,b=&y;
printf("%p\n",a);
printf("%p",b);
    return 0;
}