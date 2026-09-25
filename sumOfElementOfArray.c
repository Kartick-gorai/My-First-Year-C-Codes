#include<stdio.h>
int main(){
    int numEle,sum = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &numEle);

    int arr[numEle];

    printf("Enter the elements of the array : ");
    for(int i = 0; i < numEle; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < numEle; i++){
        sum += arr[i];
    }

    printf("Sum of the element in the array is : %d",sum);
}