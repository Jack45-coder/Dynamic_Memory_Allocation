/*
12.ReallocateRowsina2DArray
 Writeaprogramtodynamicallyallocatea2Darrayusingmalloc,takeinput,and
 thenuserealloctoaddmorerows.Fillthenewrowswithuserinputanddisplay
 theupdatedmatrix.
 Input:-Entertheinitialnumberofrowsandcolumns:22-
 1 2
 3 4.
-Resizethematrixto3rows.
 Entertheelements:- 5 6
 Output:-UpdatedMatrix:-
 1 2
 3 4
 5 6
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

void printArray(int **arr, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int rows, cols, rows2;
  printf("Enter the number of rows and columns:\n");
  scanf("%d %d",&rows,&cols);

  int **ptr = (int **)malloc(rows*sizeof(int*));
  for(int i = 0; i < rows; i++){
    ptr[i] = (int *)malloc(cols*sizeof(int));
  }

  printf("Enter the elements:\n");
  takeinputs(ptr,rows,cols);

  printf("Original Array Elements:\n");
  printArray(ptr,rows,cols);

  printf("Enter the number of increase rows: ");
  scanf("%d",&rows2);

  ptr = (int**)realloc(ptr, rows2*sizeof(int*));

   // Allocate memory for new rows
   for(int i = rows; i < rows2;i++ ){
    ptr[i] = (int *)malloc(cols*sizeof(int));
   }

   // Take input for new rows
  printf("Enter the new elements:\n");
  takeinputs(ptr+rows,rows2 - rows,cols);

  // Print updated matrix
  printf("Updated Matrix:\n");
  printArray(ptr, rows2, cols);

// Free allocated memory
for (int i = 0; i < rows2; i++)
free(ptr[i]);
free(ptr);
  return 0;
}
