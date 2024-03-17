#include<stdio.h>
int main(){
int arr[7]={23,7,8,84,738,83,923};
int brr[7];

for(int i=0;i<=6;i++){
    brr[i]=arr[6-i];
}
for(int i=0;i<=6;i++){
    arr[i]=brr[i];
}
for(int i=0;i<=6;i++){
    printf("\n%dth element in reversed array is %d",i,arr[i]);
    }
    return 0;
}