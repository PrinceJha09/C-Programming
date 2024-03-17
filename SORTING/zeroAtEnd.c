#include<stdio.h>
int main(){
int arr[]={5,0,3,0,9,2,0,0,-7};
int ans[9];
int idx=0;
for(int i=0;i<9;i++){
    if(arr[i]!=0){
        ans[idx]=arr[i];
        idx++;
    }
}
while(idx!=9){
    ans[idx]=0;
    idx++;
}
for(int i=0;i<9;i++){
    printf("%d ",ans[i]);
}
    return 0;
}