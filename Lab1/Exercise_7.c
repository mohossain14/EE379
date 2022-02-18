#include <stdio.h>


int main(void){
    int num[5];
    int x;
    
    printf("Enter 5 numbers:");
    scanf("%d %d %d %d %d", &num[0],&num[1],&num[2],&num[3],&num[4]);
    
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 4; ++j){
            if(num[j] > num[j+1]){
                x = num[j];
                num[j] = num[j+1];
                num[j+1] = x;
            }
        }
    }
    printf("%d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
    return 0;
}