#include<stdio.h>
int main(){
int m;
printf("enter no of rows for 1st matrix");
scanf("%d",&m);
int n;
printf("enter no of columns for 1st matrix");
scanf("%d",&n);
int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
int p;
printf("enter no of rows for 2nd matrix");
scanf("%d",&p);
int q;
printf("enter no of columns for 2nd matrix");
scanf("%d",&q);
int b[p][q];
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
} 
if(n!=p){printf("matrices cannot be multiplied");}
else{
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
        for(int k=0,l=0;k<n && l<n;k++,l++){
            res[i][j]+=a[i][k]*b[l][j];
        }
    }
}   
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("\n");
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
}
    return 0;
}