#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int nsp=n/2;  //no of spaces
    int nst=1;    //no of stars
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
        printf("  ");
        }
        for(int k=1;k<=nst;k++){
        printf("* ");
        }
        if(i<=n/2){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
}