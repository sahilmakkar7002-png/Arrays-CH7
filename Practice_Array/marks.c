// take the input marks of three students & print them using arrays
#include<stdio.h>

int main(){
    int marks[3];

    printf("Enter Physics:");
    scanf("%d", &marks[0]);
     printf("Enter Maths:");
    scanf("%d", &marks[1]);
     printf("Enter Chemistry:");
    scanf("%d", &marks[2]);

    printf("Phy=%d\n, Math=%d\n, Chem=%d\n", marks[0], marks[1], marks[2]);

    return 0;
}