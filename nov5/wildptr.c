#include<stdio.h>
int main()
{
    int*ptr;
    int*a;
    int num=120;
    a=&num;
    printf("%u\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",*a);
    return 0;
}
