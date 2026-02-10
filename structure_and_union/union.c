#include <stdio.h>
#include <string.h>

//   book - page - 400|price - 50.87|name - "java"
union book{
    int pages;
    float price;
    char name[100];
};

int main() {
    union book b1, b2;
    
    b1.pages = 100;
    b1.price = 150.50;
    strcpy(b1.name, "java");
    
    printf("Book information: \n");
    printf("Name is : %s, \nPrice is %.2f, \nTotal pages : %d\n", b1.name, b1.price, b1.pages);
   
    b2.pages = 200;
    b2.price = 250.50;
    strcpy(b2.name, "Python");
    
    printf("Book information: \n");
    printf("Name is : %s, \nPrice is %.2f, \nTotal pages : %d\n", b2.name, b2.price, b2.pages);
    
    return 0;
}