#include<stdio.h>
int main(){
    int arr[5]={2,54,65,98,72};
    int sume=0;
    int sumo=0;
    for(int i=0;i<=4;i++){
        if(i%2==0){
            sume=sume+arr[i];
        }
        else sumo=sumo+arr[i];
    }
    if(sume>sumo) printf("%d",sume-sumo);
    else printf("%d",sumo-sume);
    return 0;
}