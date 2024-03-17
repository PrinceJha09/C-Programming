#include<stdio.h>
int main(){
int arr[4][3]={{1,3,5},{7,9,1},{2,4,6},{8,0,2}};
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        if(i%2==0){
            printf(" %d",arr[i][j]);
        }
        else{
            printf(" %d",arr[i][2-j]);
        }
    }
    printf("\n");
}
    return 0;
}