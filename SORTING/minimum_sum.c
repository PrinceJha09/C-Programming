#include<stdio.h>
#include<stdbool.h>
//using recursion
int arr[]={1,9,5,9,9,0,0,0,9};
void secSmall(int a){
    if(arr[a]!=arr[a-1]){
        int temp=arr[a];
        arr[a]=arr[a-1];
        arr[a-1]=temp;
    }
    else secSmall(a-1);
    return;
}
int main(){
    int n=9;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        bool flag=true; // sorted 
        for (int j = 0; j < n-1-i; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            } 
        }
        if (flag==true){break;}
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    int num=0;
    for(int i=0;i<n;i++){
        num = 10*num + arr[i];
    }
    //using loops

    // for(int j=n-1;j>=1;j--){
    //    if(arr[j]!=arr[j-1]){
    //     int temp=arr[j];
    //     arr[j]=arr[j-1];
    //     arr[j-1]=temp;
    //     break;
    //    }
    //    else continue; 
    // }
    secSmall(n-1);
    int num2=0;
    for(int i=0;i<n;i++){
        num2 = 10*num2 + arr[i];
    }

    int min_sum=num + num2;
    printf("\nMinimum sum is %d",min_sum);
    return 0;
}