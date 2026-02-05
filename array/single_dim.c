#include <stdio.h>

int main() {
   float students[] = {78.6, 88.6, 73.6, 89.6, 65.6, 99.3, 45.3};
   
//   Access single element
//   printf("%.2f", students[1]);

// 4 * 6 = 24/4
    
    int len = sizeof(students)/sizeof(students[0]);
    
    printf("Total length : %d\n", len);


    for(int start = 0; start<len; start++){
        printf("%.2f\n", students[start]);
    } 
}

// ----------------

#include <stdio.h>

int main() {
   float marks[] = {78.6, 88.6, 73.6, 89.6, 65.6};
   
//   Access single element
//   printf("%.2f", marks[1]);

// 4 * 6 = 24/4
    
    int len = sizeof(marks)/sizeof(marks[0]);
    
    printf("Total length : %d\n", len);

    float total = 0;
    for(int start = 0; start<len; start++){
        printf("%.2f\n", marks[start]);
        total += marks[start];
    } 
    
    printf("Total obtained marks: %.2f\n", total);
    printf("Average marks: %.2f\n", total/len);
}

500 - 100%
396.00 - ?

39600/500
396/5

79.2