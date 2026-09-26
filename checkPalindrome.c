#include<stdio.h>
int main(){
    int num, rev = 0,digits,original;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;
    while(num != 0){
        digits = num % 10;
        rev = rev*10 + digits;
        num = num / 10;
    }
    if(original == rev){
        printf("%d is a palindrome number",original);
    } else {
        printf("Not a palindrome number");
    }
}