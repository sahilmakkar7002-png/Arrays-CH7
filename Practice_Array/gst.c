// wap to enter prices of 3 items & print their final cost with GST

#include<stdio.h>

int main(){

    float price[3];

    printf("Enter Price of 1st item :");
    scanf("%f", &price[0]);
    printf("Enter Price of 2nd item:");
    scanf("%f", &price[1]);
    printf("Enter Price of 3rd item:");
    scanf("%f", &price[2]);

    printf("Total Price of 1st item=%f\n", price[0]+ (0.18*price[0]));
    printf("Total Price of 2nd item=%f\n", price[1]+ (0.18*price[1]));
    printf("Total Price of 3rd item=%f\n", price[2]+ (0.18*price[2]));
}