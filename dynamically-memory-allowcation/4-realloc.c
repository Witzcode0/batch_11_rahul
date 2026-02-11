#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int size;
    printf("Enter a array size: ");
    scanf("%d", &size);
    
  int *ptr1 = (int *)malloc(sizeof(int) * size); //20
  
  if(ptr1 == NULL){
      printf("Allocation Failed.");
      exit(0);
  }
  
  int new_size = 10;
  
  int *ptr2 = (int *)realloc(ptr1, new_size*sizeof(int)); //40
  
  for(int start = 0; start < new_size; start++){
      ptr2[start] = start + 1;
  }
  
  for(int start = 0; start < new_size; start++){
      printf("%d\n", ptr2[start]);
  }
  
 
    return 0;
}