#include<stdio.h>
int main()
{ 
    int n;
  printf("enter the number of elements");
  scanf("%d",&n);
  int arr[n];
  int max=arr[0];
  printf("enter 5 elements");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
    for(int i=0;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("the max elements is %d",max);
    return 0;
    }
  