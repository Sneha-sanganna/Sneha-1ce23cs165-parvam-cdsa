#include<stdio.h>
int main(){

     int a=10;
     int*ptr=&a;
     ptr=&a;
     printf("the value a is %d\n",a);
     printf("the address of a is %u\n",&a);
     printf("the ptr is %u\n",ptr);
     printf("the  value of is %d\n",*ptr);
     
     return 0;
}
