/*
 Q5: Sum of Array Elements Using
malloc
 Task:
 Write a program that dynamically allocates a 1D array using
Take input for the array.
 Calculate and display the sum of its elements.
 Input:
 Enter the number of elements: 3
 Enter the elements: 5 10 15
 Output:
 malloc .
 Sum of array elements: 30
*/
#include <stdio.h>
#include <stdlib.h>
void inputArr(int *arr, int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", arr + i);
  }
}

int sumOfArr(int *arr, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  printf("Sum of Array: %d", sum);
  return sum;
}
int main()
{
  int n;
  printf("Enter the size of N: ");
  scanf("%d", &n);
  if(n == 0){
    printf("Memory Allocation faild!");

    return 0;
  }
  int *ptr = (int *)malloc(n * sizeof(int));
  inputArr(ptr, n);
  sumOfArr(ptr, n);

  free(ptr);
  return 0;
}