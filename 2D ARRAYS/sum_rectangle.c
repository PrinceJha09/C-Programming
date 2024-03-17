#include<stdio.h>
int main(){
int a[5][4]={{2,4,6,8},{9,5,6,4},{5,7,9,0},{4,76,9,5},{3,8,56,9}};
int l1,r1,l2,r2;
printf("enter cooordinates of l1,r1");
scanf("%d %d",&l1,&r1);  
printf("enter cooordinates of l2,r2");
scanf("%d %d",&l2,&r2); //considering l1<l2 and r1<r2 
int sum=0;   
for(int i=l1;i<=l2;i++){
    for(int j=r1;j<r2;j++){
        sum += a[i][j];
    }
}
printf("\n %d",sum);
    return 0;
}