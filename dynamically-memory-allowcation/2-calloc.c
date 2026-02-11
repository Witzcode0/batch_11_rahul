#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int size;
    printf("Enter a array size: ");
    scanf("%d", &size);
    
  int *ptr = (int *)calloc(sizeof(int), size);
  
  if(ptr == NULL){
      printf("Allocation Failed.");
      exit(0);
  }
  
  for(int start = 0; start < size; start++){
      ptr[start] = start + 1;
  }
  
  for(int start = 0; start < size; start++){
      printf("%d\n", ptr[start]);
  }
 

    return 0;
}