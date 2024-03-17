#include<stdio.h>
int min(int a,int b){
    int m=a;
    if(a>b) m=b;
    return m;
}
int gcd(int a, int b){
    int m=min(a,b);
    int c;
    // for(int i=1;i<=m;i++){
    //     if((a%i==0)&&(b%i==0))
    //     c=i;
    // }
    for(int i=m;i>=1;i--){
        if((a%i==0)&&(b%i==0))
        c=i;
        break;
    }
    return c;
}
 int main(){
    int x;
    printf("enter 1st number");
    scanf("%d",&x);
    int y;
    printf("enter 2nd number");
    scanf("%d",&y);
    int c=gcd(x,y);
    printf("GCD of given numbers is %d", c);


    return 0;
}