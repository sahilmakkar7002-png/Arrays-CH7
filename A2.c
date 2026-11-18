// we are printing marks of two students in three subjects using 2-D Array
#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=90;
    marks[0][2]=90;

    marks[1][0] =91;
    marks[1][1]=92;
    marks[1][2]=93;

    printf("%d\n", marks[0][2]);
    printf("%d\n", marks[1][2]);

    return 0;
}