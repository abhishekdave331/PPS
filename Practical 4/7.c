#include<stdio.h>
void main(){
    int A[3][3], B[3][2], C[3][2], sum=0, i, j;

    printf("Enter the elements of matrix A[3][3] :\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B[3][2] :\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            for(int k=0; k<3; k++){
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    printf("Multiplication of Matrix A and B is..\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
}