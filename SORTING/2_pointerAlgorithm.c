#include<stdio.h>
int main(){
int target=8;
int arr[]={1,2,3,4,5,8,9,10};
int i=0,j=7;
while(i<j){
    if(arr[i]+arr[j]==target){
        printf("sum of %dth and %dth indices element is %d",i,j,target);
        break;
    }
    else if (arr[i]+arr[j]>target)
    {
        j--;
    }
    else i++;
}
    return 0;
}