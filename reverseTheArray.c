//Reverse the Array
#include<stdio.h>
int main(){
     int numEle,temp;
    printf("Enter the size of the array : ");
    scanf("%d", &numEle);

    int arr[numEle];

    printf("Enter the elements of the array : ");
    for(int i = 0; i < numEle; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < numEle/2; i++){
        temp = arr[numEle-1-i];
        arr[numEle-1-i] = arr[i];
        arr[i]= temp;   
    }
    printf("Reverse of the array is : ");
    for(int i =0; i < numEle; i++){
        printf("%d ",arr[i]);
    }
}