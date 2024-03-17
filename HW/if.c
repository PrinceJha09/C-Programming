#include<stdio.h>
int main(){
int a=10,b=1;
if((a=20) & (b-=1)){ printf("%d %d",a,b);}
else {printf("%d %d",a,b);}
    return 0;
}