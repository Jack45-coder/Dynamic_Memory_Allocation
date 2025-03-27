/*
Q1: Dynamic Array Using
malloc
 Task:
 Write a program that dynamically allocates a 1D array using
Take input from the user to fill the array with integer values.
 Display the contents of the array.
 Input:
 Enter the number of elements: 5
 Enter the elements: 10 20 30 40 50
 Output:
 malloc .
 Array contents: 10 20 30 40 50
*/
#include<stdio.h>
#include<stdlib.h>
void inputsArr(int *arr, int n){
  printf("Enter %d elements:\n", n);
  for(int i = 0; i < n; i++){
    scanf("%d",(arr+i));
  }
}
int main(){
int n;
printf("Enter the size of Array: ");
scanf("%d",&n);

int *arr = (int *)malloc (n*sizeof(int));
inputsArr(arr,n);

for(int i = 0; i < n; i++){
    printf("%d ",*arr+i);
}


  free(arr);
  return 0;
}