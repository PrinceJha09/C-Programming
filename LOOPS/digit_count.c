#include<stdio.h>
int  main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    int count=0;
    // for(count=0;n!=0;count++){
    // n=n/10;
    // }
    while(n!=0){
    n=n/10;
    count++;
    }
    printf("the number of digits is :%d", count);
    return 0;
}