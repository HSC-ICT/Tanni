#include<stdio.h>

int main(){
    int row, col, i, j;
    // 3 * 3 matrix
    // int matrix[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // taking input from user
    int matrix[3][3];
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