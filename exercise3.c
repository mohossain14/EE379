//writes program that reads in user numbers

#include <stdio.h>

int main(void){
    int num, i, r, s = 0;
    double sum;

    printf("Enter the number of numbers you would like to print: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        printf("Enter a number: ");
        scanf("%d", &r);
        s += r;
    }
    sum = (double)s / num;

    printf("%.2f\n", sum);
}