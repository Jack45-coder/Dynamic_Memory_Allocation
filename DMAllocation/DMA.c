#include <stdio.h>
#include <stdlib.h>
void inputArr(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", arr + i);
  }
}

int AvgOfArr(int *arr, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  int AVG = sum / n;

  return AVG;
}

int main()
{

  int n = 5;
  printf("Enter size of Elements: ");
  scanf("%d", &n);

  int *ptr = (int *)malloc(n * sizeof(int));
  inputArr(ptr, n);
  int rs = AvgOfArr(ptr, n);
  printf("Average: %d",rs);

  free(ptr);

  return 0;
}