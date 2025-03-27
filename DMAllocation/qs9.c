/*
3. Create a 1D Array Using calloc and Assign Values Automatically
 Write a program that dynamically allocates a 1D array using calloc, automatically
 assigns values to the array (e.g., squares of indices), and then displays the array.
 Input:- Enterthe number of elements: 3
 Output:- Arraycontents (squares of indices):
0 1 4
*/

#include <stdlib.h>
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size: ");
  scanf("%d", &n);

  int *ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory allocation faild!");
    return 1;
  }

  printf("Array contents: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", (*ptr + i));
  }

  free(ptr);
  return 0;
}