Recursion is a programming technique where a function calls itself repeatedly until a specific base condition is met. A function that performs such self-calling behavior is known as a recursive function, and each instance of the function calling itself is called a recursive call.

#include <stdio.h>

void rec(int n) {
    
    // Base Case
    if (n == 6) return;

    printf("Recursion Level %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
    return 0;
}

---------
factorial

#include <stdio.h>

int fact(int num){
    if(num == 1){
        return 1;
    }else if(num == 0){
        return 1;
    }else{
        return num * fact(num-1);
    }
}

// 5 * 4 * 3 * 2 * 1 = 120

int main() {
    int n;
    printf("Enter a factorial number: ");
    scanf("%d", &n);
    printf("factorial = %d", fact(n));
}



#include <stdio.h>

int fact(int num){
    if(num == 0){
        return 1;
    }else{
        return num * fact(num-1);
    }
}

// 5 * 4 * 3 * 2 * 1 = 120

int main() {
    int n;
    printf("Enter a factorial number: ");
    scanf("%d", &n);
    printf("factorial = %d", fact(n));
}

