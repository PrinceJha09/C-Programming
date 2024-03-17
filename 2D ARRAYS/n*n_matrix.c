#include<stdio.h>
int main(){
int n;
printf("enter value of n");
scanf("%d",&n);
int a[n][n];
int minr=0,minc=0,maxr=n-1,maxc=n-1;
int tne=n*n;
int count=0;
while(count<tne){
//for(;minr<=maxr || minc<=maxc;){
for(int j=minc;j<=maxc && count<tne;j++){
    count++;
    a[minr][j]=count;
}
minr++;
for(int i=minr;i<=maxr && count<tne;i++){
    count++;
    a[i][maxc]=count;
}
maxc--;
for(int j=maxc;j>=minc && count<tne;j--){
    count++;
    a[maxr][j]=count;
}
maxr--;
for(int i=maxr;i>=minr && count<tne ;i--){
    count++;
    a[i][minc]=count;
}
minc++;
}
for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1;j++){
        printf(" %d",a[i][j]);
    }
    printf("\n");
}
    return 0;
}