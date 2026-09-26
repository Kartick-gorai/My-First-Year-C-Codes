#include<stdio.h>
int main(){
    int num,first,last;
    printf("Enter a number : ");
    scanf("%d",&num);

    num = (num < 0)? -num : num;

    last = num % 10;
    first = num;
    while(first >= 10){
        first = first/10;
    }

    printf("First digit = %d and last digit = %d",first,last);
   

}