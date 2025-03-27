/*
 Q2: Dynamic Array Using
Task:
 calloc
 Write a program that dynamically allocates a 1D array using
Take input from the user to fill the array with integer values.
 Display the contents of the array.
 calloc .
 1
 DMA Practice Set :
Input:
 Enter the number of elements: 5
 Enter the elements: 10 20 30 40 50
 Output:
 Array contents: 10 20 30 40 50
*/

#include <stdio.h>
#include <stdlib.h>
void inputArr(int *arr, int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d",arr+i);
  }
}

int main()
{
  int n;
  printf("Enter the size of Array: ");
  scanf("%d",&n);

  if(n == 0){
    printf("Memory Allocation faild!");

    return 0;
  }
  
  int *arr = (int *) calloc(n, sizeof(int));
  arr[n];
  inputArr(arr,n);


  free(arr);

  return 0;
}