#include<stdio.h>
int main(){
int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
for(int j=0;j<3;j++){
    for(int i=0;i<4;i++){
        if(j%2!=0){
            printf(" %d",arr[i][j]);
        }
        else{
            printf(" %d",arr[3-i][j]);
        }
    }
    printf("\n");
}
    return 0;
}