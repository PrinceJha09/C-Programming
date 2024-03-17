#include<stdio.h>
int main(){
int arr[7]={37,3,5,4,3,2,91};
for(int i=0;i<=6;i++){
    for(int j=i+1;j<=6;j++){
        if (arr[i]==arr[j]){
            printf("\n the duplicate elememt present is %d",arr[i]); //if only one is repeating then use break
        }
    }
}
    return 0;
}