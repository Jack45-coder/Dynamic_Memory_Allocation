// DYNAMIC 2D ARRAY CREATION:- [only single pointer]

#include <stdio.h>
#include <stdlib.h>
void takeinput(int r, int c, int *arr)
{
  printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", (arr + i * c + j));
    }
  }
}

void printArray(int r, int c, int *arr)
{
  printf("Elements: here:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", *(arr + i * c + j));
    }
    printf("\n");
  }
}
int main()
{
  int r, c;
  printf("Enter the number of row and colomns:\n");
  scanf("%d %d", &r, &c);

  int *arr = (int *)malloc(r * c * sizeof(int));
  if (arr == NULL)
  {
    printf("Memory Allocation Faild!");
    return 1;
  }

  takeinput(r, c, arr);
  printArray(r, c, arr);

  free(arr);
  return 0;
}