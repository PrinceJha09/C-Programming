#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<2*i;k++){
            printf("%d ",a);
            if(k<i){
            a++;
            }
            else if (k>=i){
            a--;
            }  
        }
        printf("\n");
    }
}