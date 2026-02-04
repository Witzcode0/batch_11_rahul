#include<stdio.h>
void main(){
    int num = 5;

    for(int row = 1; row<=num; row+=1){
        for(int col = 1; col<=row-1; col+=1){
            printf("  ");
        }
        for(int col = 1; col<=num-row+1; col+=1){
            printf("%d ", col);
        }

        printf("\n");
    }
}
