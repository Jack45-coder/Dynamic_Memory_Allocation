/*
 8.Reallocate Array to Store Square RootsofOriginalValues
 Writeaprogramthatdynamicallyallocatesa1Darrayusingmalloc,takesinputto
 fillthearray,andthenresizesitusingrealloctoaddmoreelements.Thenew
 elementsshouldbethesquarerootsoftheexistingelements(roundedto2decimal
 places).
 Input:-Enterthenumberofelements:3-Entertheelements: 4 9 16-Resizethearrayto:6
 Output:-Originalarraycontents: 4 9 16-Resizedarraycontents: 4 9 16 2.00 3.00 4.00
*/

#include<stdlib.h>
#include<stdlib.h>
void takeinputs(int *arr, int n){
  printf("Enter %d Elements: ");
  for(int i = 0; i < n; i++){
    scanfF("%d",arr+i);
  }
}

int main(){






  return 0;
}
