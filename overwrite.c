#include<stdio.h>
int main(){
    FILE*file=fopen("hello.txt","w");
    if(file==NULL){
        perror("Error opening files");
        return 1;
    }
    fprintf(file ,"This is the first line.\n");
    fprintf(file, "writing to file will overwrite its contents.\n");
    fclose(file);
    printf("File written successfully in write mode.\n");
    return 0;
}