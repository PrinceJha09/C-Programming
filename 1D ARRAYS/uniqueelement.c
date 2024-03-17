#include<stdio.h>
#include<stdbool.h>
int main(){
int arr[7]={1,2,5,4,3,2,1};
for(int i=0;i<=6;i++){
    bool flag=false;
    for(int j=0;j<=6;j++){
        if(i==j) continue;
        if (arr[i]==arr[j]){
            flag=true;
        }     
    }
    if (flag==false){
            printf("%d is the unique element",arr[i]);
            
    }  

}
    return 0;
}