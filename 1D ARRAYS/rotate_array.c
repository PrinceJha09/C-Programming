#include<stdio.h>
void reverse(int arr[],int a,int b){
    int i=a; //kahan se krna h reverse a=starting index
    int j=b; //kahan tak krna h reverse b=ending index
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
    
}
int main(){
int arr[8]={76,823,83,939,973,73,82,2};
int k;
printf("enter number of rotate steps:");
scanf("%d",&k);
k=k%7;
reverse(arr,0,7);
reverse(arr,0,k-1);
reverse(arr,k,7);
for(int i=0;i<=7;i++){
    printf(" %d ",arr[i]);
}
    return 0;
}