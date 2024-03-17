#include<stdio.h>
int main(){
    int n;
    printf("enter number of lines:"); // no of rows
    scanf("%d",&n);
    int m;
    printf("enter number of stars in one line:"); // no of columns
    scanf("%d",&m);
    for(int i=1;i<=n;i++){ // outer loop -> no of lines
        for(int j=1; j<=m; j++){ // inner loop -> stars in one line
        printf(" *");
        }
        printf("\n");
    }
}