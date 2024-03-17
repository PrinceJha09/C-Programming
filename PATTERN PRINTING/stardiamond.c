#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int nsp=n/2;  //no of spaces
    int nst=1;    //no of stars
    for(int i=1;i<=n;i++){
        if(i<=n/2+1){
            for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nst+=2; //nst=nst+2
        }
        else {
            for(int j=1;j<=nsp+2;j++){
            printf("  ");
        }
        nsp++;
        for(int k=1;k<=nst-4;k++){
            printf("* ");
        } 
        nst-=2; // nst=nst-2
        }
        
        printf("\n");
    }
}