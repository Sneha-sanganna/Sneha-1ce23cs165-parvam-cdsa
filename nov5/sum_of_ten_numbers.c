#include<stdio.h>
int main()
{
    int sum=0;
    //1+2+3+4+5+6+7+8+9+10=55
    for(int i=1;1<=10;i++){
        printf("%d",sum);//13610
        sum+=i;//sum=sum+i;//1+2=3
    }
    printf("%d",sum);//55
   
return 0;

}