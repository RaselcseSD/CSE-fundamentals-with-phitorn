#include <stdio.h>

void print_matrix(int matrix[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void transpose_matrix(int matrix[3][3]) {
  int transposed[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      transposed[j][i] = matrix[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix[i][j] = transposed[i][j];
    }
  }
}

int main() {
  int matrix[3][3];

  printf("Enter the matrix (3x3):\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  transpose_matrix(matrix);

  printf("Transposed matrix:\n");
  print_matrix(matrix);

  return 0;
}

