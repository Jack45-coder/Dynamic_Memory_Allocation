#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void takeinputs(int *arr, int n){
  printf("Enter the elements:\n");
  for(int i  = 0; i < n; i++){
    scanf("%d",(arr+i));
  }
}

void printArray(int *arr, int n){
  printf("Array Elements: ");
  for(int i = 0; i < n; i++){
    printf("%d ",(*arr+i));
  }
  printf("\n");
}

int main(){
int n,new;
printf("Enter the size: ");
scanf("%d",&n);

// Memory allocation check
int *ptr = (int *)malloc(n * sizeof(int));
if(ptr == NULL){
  printf("Memory Allocation FAILD!");
  return 1;
}
takeinputs(ptr,n);
printArray(ptr,n);

printf("Enter the new size: ");
scanf("%d",&new);

// Attempt to reallocate memory safely
int *temp = (int *)realloc(ptr,new*sizeof(int));
if(ptr == NULL){
  printf("Memory Allocation FAILD!");
  free(ptr); // Free old memory before exiting
  return 1;
}
ptr = temp;
// If new size is greater, take input for new elements
if(new > n){
  printf("Enter %d more elements:\n",new);
  takeinputs(ptr+n,new-n);
}
printArray(ptr,new);

free(ptr);
  return 0;
}