#include <stdio.h>
int main()
 {
  int r, c, a[100][100], b[100][100], sum[100][100], sub[100][100], mul[100][100],  i, j;
  float div[100][100];

  // Entering the number of rows and columns in an Array
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

// Entering the number of elements in an Array

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
         {
             printf("Enter element b%d%d: ", i + 1, j + 1);
             scanf("%d", &b[i][j]);
         }

  // adding two matrices

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

        // suntraction two matrices

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
        {
            sub[i][j] = a[i][j] - b[i][j];
        }

        // multiplication two matrices

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
        {
            mul[i][j] = a[i][j] * b[i][j];
        }

        // division two matrices

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
        {
            div[i][j] = a[i][j] / b[i][j];
        }

  // printing the result

  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
        printf("%d   ", sum[i][j]);
        if (j == c - 1) {
        printf("\n\n");
      }

    }

     printf("\nSubtraction of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
        printf("%d   ", sub[i][j]);
        if (j == c - 1) {
        printf("\n\n");
      }

    }

     printf("\n Multiplication of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
        printf("%d   ", mul[i][j]);
        if (j == c - 1) {
        printf("\n\n");
      }

    }

     printf("\n Division of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
        printf("%.2f   ", div[i][j]);

        /* if (j == c - 1) 
        {
            printf("\n\n");
        } */

    }

  return 0;
}
