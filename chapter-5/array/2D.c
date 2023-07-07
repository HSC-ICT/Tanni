#include <stdio.h>

int main(){
    int arr2[5][5] = {
                {-1,2,7,4,5},
                {1,-2,3,4,-5},
                {1,2,3,-4,5},
                {1,-2,3,4,5},
                {-1,2,3,-4,5}
            };
    // int tmp[3][5] = {
    //             {1,2,3,4,5},
    //             {1,2,3,4,5},
    //             {1,2,3,4,5}
    //         };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            // printf("%d ", arr2[i][j]);
            printf("%d\n", arr2[2][4]);
            printf("%d\n", arr2[1][3]);
            printf("%d\n", arr2[4][2]);
            printf("%d\n", arr2[2][1]);
            break;
        }
        break;
    }
}