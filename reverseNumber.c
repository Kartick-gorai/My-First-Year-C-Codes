#include<stdio.h>
int main(){
    int num, rev = 0, digits;
    printf("Enter a number : ");
    scanf("%d",&num);

    while(num != 0){
        digits = num % 10;
        rev = rev*10 + digits;
        num = num / 10;
    }

    printf("The reverse number is : %d",rev);

}