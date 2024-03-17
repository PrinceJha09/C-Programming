#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1; 
    return a*power(a,b-1);
}
int main(){
int a;
printf("Enter any number:");
scanf("%d",&a);
int b;
printf("Enter power:");
scanf("%d",&b);
int pow=power(a,b);
printf("\n%d",pow);
    return 0;
}