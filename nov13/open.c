#include<stdio.h>
int main(){
    FILE*file=fopen("example.c","r");
    if(file==NULL){
        printf("Error creating files.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fclose(file);
    return 0;
}