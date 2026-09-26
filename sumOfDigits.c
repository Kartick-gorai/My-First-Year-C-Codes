#include<stdio.h>
int main(){
    int num, sum = 0, digits;
    printf("Enter a number : ");
    scanf("%d",&num);

   num = (num < 0)? -num : num;

    while(num != 0){
        digits = num % 10;
        sum = sum + digits;
        num = num / 10;
    }
    printf("The sum of all the digits is : %d",sum);
}