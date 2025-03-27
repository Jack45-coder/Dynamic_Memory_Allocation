/*
5. Resize a 1D Array Using realloc and malloc
 Write a program that dynamically allocates a 1D array using malloc, takes input to
 f
 ill the array, and then uses realloc to resize the array and displays the updated
 array.
 Input:- Enterthe number of elements: 3
 - Enterthe elements: 10 20 3
 - Resize the array to: 5
 - Enterthe newelements: 40 50
 Output:- Original array contents: 10 20 30- Resized array contents: 10 20 30 40 50
*/

#include <stdlib.h>
#include <stdio.h>
void takeinputs(int *ptr, int n)
{
  printf("Enter %d Elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (ptr + i));
  }
}

void printArray(int *ptr, int n)
{
  printf("Elements HEre: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }
}

int main()
{
  int size, nsize;
  printf("Enter the size of Array: ");
  scanf("%d", &size);

  int *ptr = (int *)malloc(size * sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory Allocation Faild!\n");
    return 1;
  }
  takeinputs(ptr, size);

  printf("How many size of increase: ");
  scanf("%d", &nsize);
  int *temp = (int *)realloc(ptr, nsize * (sizeof(int)));

  if (temp == NULL)
  {
    printf("Memory reallocation failed\n");
    free(ptr);
    return 1;
  }

  ptr = temp;
  if (nsize > size)
  {
    printf("Enter %d more elements:\n", nsize - size);
    takeinputs(ptr + size, nsize - size);
  }
  printArray(ptr, nsize);

  free(ptr);
  return 0;
}