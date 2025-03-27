/*
 Q6: Maximum Element in Array Using
 Task:
 calloc
 Write a program that dynamically allocates a 1D array using
 Take input for the array.
 Find and display the maximum element.
 Input:
 Enter the number of elements: 4
 Enter the elements: 10 25 30 5
 Output:
 calloc .
 Maximum element: 30
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter the size: ");
  scanf("%d", &n);
  if(n == 0){
    printf("Memory Allocation faild!");

    return 0;
  }

  int *ptr = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }

  int max = 0;
  for (int i = 0; i < n; i++)
  {
    if (ptr[i] > max)
    {
      max = ptr[i];
    }
  }
  printf("Maximum Elements: %d", max);

  free(ptr);
  return 0;
}