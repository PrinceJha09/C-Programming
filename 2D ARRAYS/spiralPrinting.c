#include<stdio.h>
int main(){
int arr[5][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24,},{25,26,27,28,29,30}};
int minr=0,minc=0,maxr=4,maxc=5;
int tne=5*6;
int count=0;
while(count<tne){
//for(;minr<=maxr || minc<=maxc;){
for(int j=minc;j<=maxc && count<tne;j++){
    printf("%d ",arr[minr][j]);
    count++;
}
minr++;
for(int i=minr;i<=maxr && count<tne;i++){
    printf("%d ",arr[i][maxc]);
    count++;
}
maxc--;
for(int j=maxc;j>=minc && count<tne;j--){
    printf("%d ",arr[maxr][j]);
    count++;
}
maxr--;
for(int i=maxr;i>=minr && count<tne ;i--){
    printf("%d ",arr[i][minc]);
    count++;
}
minc++;
}
    return 0;
}