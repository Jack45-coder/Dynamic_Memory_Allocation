// String Reverse Using Malloc:-

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void takeinpute(char *str, int s)
{
  printf("Enter the string: ");
  fgets(str, s, stdin);
  str[strcspn(str, "\n")] = '\0';
}

int main()
{
  int s = 21; // 20 chars + 1 null character.
  char *ptr = (char *)malloc(s * sizeof(char));
  if (ptr == NULL)
  {
    printf("Memory Allocation FAILD!");
    return 1;
  }
  takeinpute(ptr,s);
  int len = strlen(ptr);
  printf("Reverse string: ");
  for(int i = len-1; i >= 0; i--){
    printf("%c",ptr[i]);
  }


  free(ptr);
  return 0;
}