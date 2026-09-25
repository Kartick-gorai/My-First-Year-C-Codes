//  Write a C program to read an array of N integers and calculate the sum of all elements at even indices and the sum of all elements at odd indices.
#include<stdio.h>
int main(){
    int numEle,sumOdd = 0, sumEven = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &numEle);

    int arr[numEle];

    printf("Enter the elements of the array : ");
    for(int i = 0; i < numEle; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < numEle; i++){
        if(i % 2 == 0){
            sumEven += arr[i];
        }
        else{
            sumOdd += arr[i];
        }
    }
    printf("The sum of the Odd Indices Number is %d and sum of Even Indices Number is %d",sumOdd,sumEven);
}