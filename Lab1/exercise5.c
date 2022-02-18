//prints decimal to binary bit

#include <stdio.h>
#include <math.h>

int main(void){
    int dig, sub, i, b = 0, k;
    int bit = 0;

    printf("Enter an integer: ");
    scanf("%d", &dig); 

    for(k = 0; k < 224; k++){
        if ((pow(2, k)) >= dig){
            b = k;
            break;
        }
        else{
            continue;
        }
    }

    for(i = b; i >= 0; i--){
        sub = pow(2, i);
        if (sub <= dig){
            dig -= sub;
            bit++;
        }
        else{
            continue;
        }
    }
    printf("The number of \"1\" bits are %d\n", bit);

    return 0;
}