#include<stdio.h>
int main(){
int a=0x121416;
short *p=&a;
printf("%d",*(p+1));
    return 0;
}