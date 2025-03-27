/*
2. Reverse the Elements of a 1D Array Using malloc
 Write a program that dynamically allocates a 1D array using malloc, takes input for
 the array, and then displays the array in reverse order.
 Input:- Enterthe number of elements: 4- Enterthe elements: 1 2 3 4
 Output:- Arrayin reverse: 4 3 2 1
*/

#include<stdio.h>
#include<stdlib.h>
void takeInputsArray(int *arr, int n){
  printf("Enter %d elements:\n",n);
  for(int i = 0;i < n; i++){
    scanf("%d",(arr+i));
  }
}
void reverseArray(int *arr, int n){
  printf("Reverse Elements Here: ");
  for(int i = n-1; i >= 0; i--){
    printf("%d ",(*arr+i));
  }
}
int main(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int *ptr = (int *)malloc(n*sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory allocation faild!");
    return 1;
  }
  takeInputsArray(ptr,n);
  reverseArray(ptr,n);

  free(ptr);
  return 0;
}