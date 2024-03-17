#include<stdio.h>
int main(){
int binary;
printf("enter a binary number\n");
scanf("%d",&binary);
int decimal=0;
int base=1;
for(base=1;binary!=0;base=2*base){
    decimal=decimal+(base*(binary%10));
    binary=binary/10;
}
printf("%d",decimal);
    return 0;
}