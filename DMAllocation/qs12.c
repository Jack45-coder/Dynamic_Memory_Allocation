/*
6. Resize Array with realloc and Display Before and After
 Write a program that dynamically allocates a 1D array using calloc, takes input to
 f
 ill it, then increases its size with realloc, and displays the array contents before and
 after resizing.
 Input:- Enterthe number of elements: 2- Enterthe elements: 7 14- Increase the size by: 4
 Output:- Original array contents: 7 14- Resized array contents: 7 14 0 0 0 0
*/

#include <stdio.h>
#include <stdlib.h>
void takeinputs(int *arr, int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (arr + i));
  }
}

void printArray(int *arr, int n)
{
  printf("Elements here:");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int size, nsize;

  // Step 1: User Input for Array Size
  printf("Enter the size: ");
  scanf("%d", &size);

  // Step 2: Allocate memory using calloc
  int *ptr = (int *)calloc(size, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory Allocation faild!\n");
    return 1;
  }

  // Step 3: Take Input in Array
  takeinputs(ptr, size);

  // Step 4: Print Original Array
  printArray(ptr,size);

  // Step 5: Increase the size
  printf("Enter the new Sized: ");
  scanf("%d", &nsize);

  // Step 6: Resize the Array
  int *temp = (int *)realloc(ptr, nsize * sizeof(int));
  if (temp == NULL)
  {
    printf("Memory allocation faild!");
    free(ptr);
    return 1;
  }
  ptr = temp;
  printArray(ptr, nsize);

  free(ptr);
  return 0;
}