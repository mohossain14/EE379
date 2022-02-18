#include <stdio.h>

int main(void){
    int Matrix[9];
    double det1;//so that i dont have one huge line of code
    double det2;
    double det3;
    double det;

    printf("Enter the first line of the matrix: \n");
    scanf("%d %d %d", &Matrix[0], &Matrix[1], &Matrix[2]);
    printf("\nEnter the second line: \n");
    scanf("%d %d %d", &Matrix[3], &Matrix[4], &Matrix[5]);
    printf("\nEnter the third line: \n");
    scanf("%d %d %d", &Matrix[6], &Matrix[7], &Matrix[8]);

    det1 = Matrix[0]*((Matrix[4]*Matrix[8])-(Matrix[5]*Matrix[7]));
    det2 = Matrix[1]*((Matrix[3]*Matrix[8])-(Matrix[5]*Matrix[6]));
    det3 = Matrix[2]*((Matrix[3]*Matrix[4])-(Matrix[6]*Matrix[7]));
    det = det1 - det2 + det3;

    if(det == 0){
        printf("False, no invertible matrix");
    }else{
        printf("True, there is an invertible matrix!");
    }
    return 0;
}