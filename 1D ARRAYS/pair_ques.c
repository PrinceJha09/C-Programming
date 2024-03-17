#include<stdio.h>
int main(){
int arr[8]={1,2,3,4,5,6,7,8};
int x=12;
int count=0;
for(int i=0;i<=7;i++){
    for(int j=0;j<i;j++){
        if (arr[i]+arr[j]==x){
            count++;
        }
    }
}
printf("numbr of such pairs is %d",count);
    return 0;
}