#include<stdio.h>
int main(){
    int num,reversed = 0 ,remainder;
printf("enter a integer: ");
scanf("%d", &num);
while (num != 0){
    remainder = num %10;
    reversed = reversed * 10 + remainder;
    num /= 10;
}
printf("Reversed Number is %d\n",reversed);
return 0;
}







