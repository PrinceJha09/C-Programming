#include<stdio.h>
 int main(){
int arr[6];
for(int i=0;i<6;i++){
printf("enter element number %d\n",i+1);
scanf("%d",&arr[i]);
 }
 for(int i=0;i<6;i++){
    printf("%d ", arr[i]);
 }

    return 0;
}