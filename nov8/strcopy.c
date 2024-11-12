#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char c[70]="world";
    char b[50];

    strcpy(b,a);
    printf("copied string is %s\n",b);
    printf("length of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1  %s\n",a);
    strcat(a,b);
     printf("concatined str2 %s\n",b);
    strcat(a,b);
    return 0;
}