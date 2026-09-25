//Max and Min element in an array
#include<stdio.h>
int main(){
    int numEle;
    printf("Enter the size of the array : ");
    scanf("%d", &numEle);

    int arr[numEle];

    printf("Enter the elements of the array : ");
    for(int i = 0; i < numEle; i++){
        scanf("%d",&arr[i]);
    }
    
    int max, min;
    max = arr[0];
    min = arr[0];

    for(int i = 0; i < numEle; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("In the array max element is %d and min element is %d",max,min);
}