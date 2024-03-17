#include<stdio.h>
int maze2(int n, int m){
    int rightWays=0;
    int downWays=0;
    if(n==1 && m==1) return 1;
    if(n==1){ //no downways movement
        rightWays+= maze2(n,m-1);
    }
    if(m==1){ //no rightways movement
        downWays+= maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightWays+= maze2(n,m-1);
        downWays+= maze2(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
int r;
printf("Enter number of rows:");
scanf("%d",&r);
int c;
printf("Enter number of columns:");
scanf("%d",&c);
int noOfWays=maze2(r,c);
printf("\n%d",noOfWays);
    return 0;
}