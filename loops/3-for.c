
// 1 * 1 = 1
// 1 * 2 = 2
// 1 * 3 = 3
// ...
// 1 * 10 = 10

// - finite [1, 10]

// syntax:

// for(initialization; condition, inc/dec){
//     code of block
// }

#include<stdio.h>

void main(){
    int table = 5;
    for(int start = 1; start<=10; start++){
        printf("%d * %d = %d\n",table, start, table*start);
    }
}
