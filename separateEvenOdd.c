// Write a C program to separate the even and odd elements of an array
#include<stdio.h>
int main(){
     int numEle, j = 0, k = 0;
     

    printf("Enter the size of the array : ");
    scanf("%d", &numEle);

    int arr[numEle];
    int evenArr[numEle];
     int oddArr[numEle];

    printf("Enter the elements of the array : ");
    for(int i = 0; i < numEle; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < numEle; i++){
        if(arr[i] % 2 == 0){
            evenArr[j] = arr[i];
            j++;
            
        }else{
            oddArr[k] = arr[i];
            k++;
            
        }
    }
    printf(" =====  Two Array Is separated ===== \n");
    printf("Odd array is : ");
        for(int i =0; i < k; i++){
        printf("%d ",oddArr[i]);
        }
    printf("\n");
    printf("Even array is : ");
        for(int i =0; i < j; i++){
        printf("%d ",evenArr[i]);
        }
}