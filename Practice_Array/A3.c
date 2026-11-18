/*Array is a pointer
int *ptr=&arr[0];
or
int *ptr=arr;*/

#include<stdio.h>
int main(){
    int aadhar[5];

    // input
    int *ptr=&aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d index:", i);
        scanf("%d", &aadhar[i]);
    }

    //output
   for(int i=0; i<5; i++){
    printf("%d index=%d\n", i, aadhar[i]);
   }

   return 0;

}