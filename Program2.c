#include <stdio.h>

int main() {
    int i, j;
    int num = 11;  

   
    int rows = 4;

   
    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  
        }
        printf("\n");  
    }

    return 0;
}
