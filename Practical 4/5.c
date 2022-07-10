#include<stdio.h>
void main(){
    int A[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int B[3][3], i, j;

    printf("Compile time intialization of matrix A.\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%2d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nRuntime initialization of matrix B.\n");
    printf("Enter all elements of matrix B : \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("B[%d][%d]=", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix of B.\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }
}