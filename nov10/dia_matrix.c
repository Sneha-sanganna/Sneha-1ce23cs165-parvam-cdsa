#include<stdio.h>
int main(){
    int A[2][2]={
        {1,2},
        {3,4}
};
    
    
    printf(" diagonal element:\n");
    
    for(int i=0;i<2;i++){
    
        for(int j=0;j<2;j++)
         {
            if(i==j){
                printf("enter the diagonal elements are:%d\n",A[i][j]);
            }
            
        }
    }
    return 0;
}