// wap to print the array in reverse order

#include<stdio.h>
void reverseArr(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5};
    reverseArr(arr, 5);
    printArr(arr, 5);

    return 0;

}
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
void reverseArr(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]= secondval;
        arr[n-i-1]= firstval;
    }
}
