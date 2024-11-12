#include<stdio.h>
int main(){
    int A[3][3]={{1,2,6},{3,4,8},{9,7,5}};
    printf(" t element:\n");
    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++)
         {printf("%d ",A[j][i]);
            }printf("\n");}
    return 0;
}