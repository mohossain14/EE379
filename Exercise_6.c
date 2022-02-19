//Exercise 6

#include <stdio.h>
#include <math.h>
#define N 100

int main(void){
    int num, k, bit = 0, sub;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    for(k = 0; k < N; k++){
        if((pow(2, k)) >= num){
            bit = k;
            break;  
        }
        else{
            continue;
        }
    }
    printf("Max bits: %d\n", bit);
    int arr[25] = {0};

    for(k = bit; k >= 0; k--){
        sub = pow(2, k);
        if(sub <= num){
            num -= sub;
            arr[k] = 1;
        }
        else{
            arr[k] = 0;
        }
    }

    for(k = bit - 1; k>= 0 ; k--){
        printf("%d", arr[k]);
    }





}