// A pointer in C is a special type of variable that stores the memory address of another variable, rather than a direct value.

// They provide a powerful mechanism for low-level memory manipulation, efficient data access, and dynamic memory management. 

// syntax:

// data_type *pointer_name;

// int num1 = 10;
// int *ptrnum;

// ptrnum = &num1;

#include <stdio.h>

int main() {
    
    int num = 10;
    int *ptr;
    ptr = &num;
    
    printf("num: %d\n", num);
    printf("*Ptr: %d\n", *ptr);
 

    return 0;
}

// --------------------------------------

#include <stdio.h>

int addition(int *a,int *b){
    return *a + *b;
}

int main() {
    
  int num1 = 10, num2 = 20;
  printf("Total = %d", addition(&num1, &num2));
 

    return 0;
}