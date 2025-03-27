/*
 Q3: Perform a Dry Run - Dynamic Array Using
Task:
 malloc
 Dry run the program that dynamically allocates a 1D array using
malloc .
 Input:
 Enter the number of elements: 5
 Enter the elements: 10 20 30 40 50
 Output:
 Array contents: 10 20 30 40 50
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the size of n: ");
scanf("%d",&n);


int *ptr = (int *)malloc(n*sizeof(int));

printf("Enter %d Elements:\n",n);
for(int i = 0; i < n; i++){
  scanf("%d",ptr+i);
}

printf("Elements here:\n");
for(int i = 0; i < n; i++){
  printf("%d ",*ptr+i);
}



  free(ptr);
  return 0;
}