// In C, a string is a sequence of characters stored in an array, and it is terminated by a special character called the null character '\0'.

// Declaring a string in C

// char name[] = "Brijesh";

// | B | r | i | j | e | s | h | \0 |
// | - | - | - | - | - | - | - | -- |


// #include <stdio.h>
// #include <string.h>

// int main() {
//     // char company[] = "bharat futurist ai";
    
//     // access element of the array
//     // printf("%c", company[16]);
//     // printf("%c", company[17]);
    
    
//     return 0;
// }

// find the length of the string
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char company[] = "bharat futurist ai";
    
//     printf("Str Length is : %d", strlen(company));
    
    
//     return 0;
// }

// str copy
// #include <stdio.h>
// #include <string.h>

// int main() {
//    char str1[] = "hello";
//    char str2[100];
   
//    strcpy(str2, str1);
   
//    printf("%s", str2);
    
    
//     return 0;
// }

// merge 2 or more strings
// #include <stdio.h>
// #include <string.h>

// int main() {
//    char fname[100] = "Brijesh";
//    char lname[] = "Gondaliyta";
   
//    strcat(fname, " ");
//    strcat(fname, lname);
  
   
//    printf("%s", fname);
    
    
//     return 0;
// }

//  compare 2 more strings
// #include <stdio.h>
// #include <string.h>

// int main() {
//    char str1[] = "hello";
//    char str2[] = "Hello";
   
//   int res = strcmp(str1, str2);
   
//    printf("%d", res);
    
    
//     return 0;
// }

// str compare
// #include <stdio.h>
// #include <string.h>

// int main() {
//    char str1[] = "hello";
//    char str2[] = "hellO";
   
//   int res = strcmp(str1, str2);
  
   
//    if (res == 0){
//        printf("Both string are same");
//    }else{
//        printf("Both string are not same");
//    }
    
    
//     return 0;
// }