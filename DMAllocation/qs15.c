/*
9.DynamicAllocationofa2DArrayUsingmalloc
 Writeaprogramtodynamicallyallocatememoryfora2Darrayusingmalloc.Fill
 thearraywithuserinputanddisplaythecontents.
 Input:-Enterthenumberofrows:2-Enterthenumberofcolumns:3-Entertheelements:-123
 456
 Output:-Matrix:-
 123
 456
10.TransposeofaDynamicallyAllocated2DArray
 Writeaprogramtodynamicallyallocatea2Darrayusingmalloc,fillitwithuser
 input,anddisplayitstranspose.
 Input:-Enterthedimensionsofthematrix:23-Entertheelements:-
 123
 456
 Output:-Transpose:-
 1 4
 2 5
 3 6
*/

#include <stdio.h>
#include <stdlib.h>

// Function to take inputs
void takeinputs(int **arr, int r, int c)
{
  printf("Enter elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}

// Function to print the matrix
void printMatrix(int **arr, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

// Function to create Transpose matrix
void transPoseMat(int **arr,int r, int c){
  for(int j = 0; j < c; j++){
    for(int i = 0; i < r; i++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int rows,cols;
  printf("Enter number of rows and columns:\n");
  scanf("%d %d",&rows,&cols);

  // Dynamically allocating memory for 2D array
  int **ptr = (int **)malloc(rows*sizeof(int));
  for(int i = 0; i < rows; i++){
    ptr[i] = (int *)malloc(cols*sizeof(int));
  }

  takeinputs(ptr,rows,cols);  // Function call to take input
  printf("Original matrix:\n");
  printMatrix(ptr,rows,cols); // Function call to print matrix
  printf("Transpose matrix:\n");
  transPoseMat(ptr,rows,cols);// Function to call print transpose



  free(ptr);
  return 0;
}