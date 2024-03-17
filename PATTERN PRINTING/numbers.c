#include<stdio.h>
int main(){
    int n;
    printf("number:");
    scanf("%d",&n);
    int m=2*n-1;
    int min=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            int a=i;
            int b=j;
            int c=m+1-i;
            int d=m+1-j;
            if(a<=b && a<=c && a<=d){
                min=a;
                printf("%d ",min);
            }
            else if(b<=a && b<=c && b<=d){
                min=b;
                printf("%d ",min);
            }
            else if(c<=a && c<=b && c<=d){
                min=c;
                printf("%d ",min);
            }
            else if(d<=a && d<=b && d<=c){
                min=d;
                printf("%d ",min);
            }
        }
        printf("\n");
    }
}