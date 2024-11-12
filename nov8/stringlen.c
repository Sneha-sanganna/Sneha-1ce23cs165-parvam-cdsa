#include<stdio.h>
int main(){
    char name[20];
    printf("enter name");
  
    fgets(name,sizeof(name),stdin);
    printf("the name is : %s", name);
    int length=strlen(name);
    printf("%d is the length of string",length-1);
    return 0;
}