/*
 14.SumofRowsandColumnsinaDynamicallyAllocated2DArray
 Writeaprogramtodynamicallyallocatea2Darrayusingmalloc,takeinput,and
 calculatethesumofeachrowandcolumn.
 Input:-Enterthedimensionsofthematrix:22
 -Entertheelements:
 -1 2
  3 4
 Output:
 -Rowsums: 1strow: 3 , 2nsrow:7
 -Columnsums: 1stcolumn:4 , 2ndcolumn: 6
*/

#include <stdio.h>
#include <stdlib.h>
void takeinputs(int **arr, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}

int sumofRow(int **arr, int r, int c)
{
  int sum = 0;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    {
      {
        sum = sum + arr[i];
      }
      printf("%d\n", sum);
    }
  return sum;
}
int main()
{
  int r, c;
  printf("Enter the number of rows and columns:\n");
  scanf("%d %d", &r, &c);
  int **ptr = (int *)malloc(r * sizeof(int));
  for(int i = 0; i < c; i++){
    ptr[i] = (int*)malloc(r*sizeof(int));
  }

  printf("Enter the elements:\n");
  takeinputs(ptr,r,c);

  sumofRow(ptr,r,c);

  free(ptr);

  return 0;
}