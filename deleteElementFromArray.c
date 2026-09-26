#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The postion where you delete the element : ");
    scanf("%d", &pos);
    
    // Shifting the elements to left

    for(int i = pos - 1; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    //Decreasing the size of the array
    n--;
    printf("Array : ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

}