/*
4. Multiply All Elements of a 1D Array Using calloc
 Write a program that dynamically allocates a 1D array using calloc, takes input for
 the array, and then calculates and displays the product of all its elements.
 Input:- Enterthe number of elements: 3- Enterthe elements: 2 3 4
 Output:- Product of array elements: 24
*/

#include <stdio.h>
#include <stdlib.h>
void takeinputsArray(int *arr, int n)
{
  printf("Enter %d Elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (arr + i));
  }
}

int productArray(int *arr, int n)
{
  long multi = 1;
  for (int i = 0; i < n; i++)
  {
    multi *= arr[i];
  }
  return multi;
}

int main()
{
  int n;
  printf("Enter the size: ");
  scanf("%d", &n);

  int *ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory Allocation faild!\n");

    return 1;
  }

  takeinputsArray(ptr, n);
  long result = productArray(ptr, n);
  printf("Product of Elements: %ld",result);

  free(ptr);
  return 0;
}