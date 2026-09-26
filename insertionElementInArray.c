#include<stdio.h>
int main(){
    int n,pos,value;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The element which you want to insert : ");
    scanf("%d", &value);
    printf("The postion where you insert the element : ");
    scanf("%d", &pos);

    //Shifting element one by one

    for(int i = n; i >= pos; i--){
        arr[i] = arr[i-1];
    }

    //Assign the value in vacant place

    arr[pos - 1] = value;

    //Increasing the size of array
    n++;

    printf("Array : ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

}   
