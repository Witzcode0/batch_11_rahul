// #include <stdio.h>

// int main() {

//     int start = 1, end = 10, table = 8;

//     do{
//         printf("%d * %d = %d\n",table, start, table*start);
//         start = start + 1;
//     }while(start <= end);

//     return 0;
// }


// 1 + 2 + 3 + ... + n

// start = 1
// end = n

// 1+2+3...n

#include <stdio.h>

int main() {

    int start = 1, end = 50;
    int total = 0;

    while(start <= end){
        total += start;
        start += 1;
    };

    printf("Total  = %d", total);

    return 0;
}
