#include<stdio.h>
int main(){
    int x=4,y,z,a,b;
    y=x++;
    z=++x;
    a=x--;
    b=--x;
    printf("\n %d %d %d %d %d", x,y,z,a,b);
    return 0;

}