#include<stdio.h>
int main(){
    int arr[7]={2,4,7,5,9,1,6};
    int* p=arr;
    int min=*p;
    int max=*p;
    int n=sizeof(arr)/4;
    int c=0;
    for (int i=0;i<n;i++){
        if(min>(*(p+c))){
            min=*(p+c);
        }
        else if(max<(*(p+c))){
            max=*(p+c);
        }
        c++;
    }
    printf("the largest is %d",max);
    printf("\nthe smallest is %d",min);
    return 0;
}