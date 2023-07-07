// matrix subtraction

#include<stdio.h>

int main(){
    int row, col, i, j;

    printf("Enter the number of rows and cols: ");
    scanf("%d %d", &row, &col);
    
    // taking input from user
    int matrix1[row][col];
    printf("Enter the values of the 1st matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    int matrix2[row][col];
    printf("Enter the values of the 2nd matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    // summation of matrix 1 and matrix 2
    int matrix3[row][col];
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // output the matrix
    printf("Summation of matrix 1 and matrix 2:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    printf("\nSummation of matrix 1 and matrix 2:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ", matrix1[i][j] - matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}