#include <stdio.h>

int policz(int a, int b);

int main() {
    printf("Hello, World!\n");
    printf("W pierwszym branchu: (2+3)*(2-3)=%d", policz(2,3));
    return 0;
}

int policz (int a, int b){
    return  (a+b)*(a-b);
}