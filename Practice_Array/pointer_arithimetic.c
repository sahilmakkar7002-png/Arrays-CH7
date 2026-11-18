// pointers can be incremented & decremented
// we can also subtract one pointer from the another
//we can also compare two pointers
#include<stdio.h>
int main(){
    int age =22;
    int *ptr=&age;

    printf("ptr=%u\n", ptr);
    ptr++;
    printf("ptr=%u\n", ptr);
    ptr--;
    printf("ptr=%u\n", ptr);

    return 0;
}