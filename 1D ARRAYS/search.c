#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,3,5,8,72,2,3};
    int x=5;
    bool flag=false;
    int idx=-1;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
        flag=true;
        idx=i;
        break;
        }
    }
    if(flag==false) printf("%d is not present in the array",x);
    else printf("%d is present in the array and its index is %d",x,idx);
    return 0;
}