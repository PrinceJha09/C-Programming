#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines:"); // no of rows
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // outer loop -> no of lines
        for(int j=1; j<=n; j++){ // inner loop -> stars in one line
        printf(" %d",j);
        }
        printf("\n");
    }
}