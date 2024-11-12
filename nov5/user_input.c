#include<stdio.h>
int main()
{
    int a;
    float c;
    char str[10];
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of c:\n");
    scanf("%f",&c);
    printf("Enter the value of string:\n");
    scanf("%s",str);

    printf("the value of a:%d\n",a);
    printf("the value of c:%.4f\n",c);
    printf("the string b is:%s\n",str);
    return 0;
}