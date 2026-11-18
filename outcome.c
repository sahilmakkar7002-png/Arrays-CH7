// what will be the output printed by the following code?
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+6));

    return 0;
}