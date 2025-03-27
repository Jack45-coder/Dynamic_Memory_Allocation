/*
 7. Using realloc to Shrink a 1D Array
 Write a program that dynamically allocates a 1D array using malloc, takes input,
 and then uses realloc to shrink the array. Display the original and resized arrays.
 Input:- Enterthe number of elements: 5- Enterthe elements: 1 2 3 4 5
 - Shrink the array to: 3
 Output:
 -Originalarraycontents:12345
 -Resizedarraycontents:123
*/

#include <stdio.h>
#include <stdlib.h>
void takeinputs(int *ptr, int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
  }
}

void printarray(int *ptr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
}

int main()
{
  int s;
  printf("Enter the size of array: ");
  scanf("%d", &s);

  int *ptr = (int *)malloc(s * sizeof(int));
  takeinputs(ptr, s);

  printf("Original array: ");
  printarray(ptr, s);

  int sh;
  printf("Enter the shrink to index?: ");
  scanf("%d", &sh);
  for(int i = 0; i < sh; i++){
    printf("%d ",*(ptr+i));
  }


  free(ptr);
  return 0;
}