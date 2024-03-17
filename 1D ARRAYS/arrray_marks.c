#include<stdio.h>
int main(){
    int n;
    printf("enter total number of indices");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        printf("enter marks of roll no. %d\n",i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<35){
            printf("roll number %d has marks less than 35\n", i);
        }
    }

    return 0;
}