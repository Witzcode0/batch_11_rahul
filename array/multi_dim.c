#include <stdio.h>

int main() {
  int matrix1[3][4] = {
      {1,2,3,0},
      {4,5,6,0},
      {7,8,9,0},
  };
  int matrix2[3][4] = {
      {11,22,33,0},
      {44,55,66,0},
      {77,88,99,0},
  };
  
//   printf("%d", matrix[1][1]);

int len_row = sizeof(matrix1)/sizeof(matrix1[0]);
int len_col = sizeof(matrix1[0])/sizeof(matrix1[0][0]);

printf("Len of row: %d\n", len_row);
printf("Len of col: %d\n", len_col);

// for(int row = 0; row<len_row; row++){
//     for(int col = 0; col <len_col; col++){
//         printf("%d ", matrix1[row][col]);
//     }
//     printf("\n");
//     // printf("Row : %d\n", matrix1[row][row]);
// }

    for(int row = 0; row<len_row; row++){
        for(int col = 0; col <len_col; col++){
            printf("%d ", matrix1[row][col] +matrix2[row][col]);
        }
        printf("\n");
    }
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col <len_col; col++){
            printf("%d ", matrix1[row][col] *matrix2[row][col]);
        }
        printf("\n");
    }
}