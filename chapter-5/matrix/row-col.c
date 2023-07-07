#include<stdio.h>

int main(){
    int row, col, i, j;

    printf("Enter the number of rows and cols: ");
    scanf("%d %d", &row, &col);
    
    // taking input from user
    int matrix[row][col];
    printf("Enter the values of the matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // output the matrix
    printf("Given matrix is:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}