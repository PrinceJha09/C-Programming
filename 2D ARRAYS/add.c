#include<stdio.h>
int main(){
int a[3][4]={{2,4,6,8},{9,5,6,4},{5,7,9,0}};
int b[3][4]={{2,6,8,0},{7,4,6,8},{3,1,0,9}};
int c[3][4];
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}    
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
    return 0;
}