#include <stdio.h>

int main() {
    int a = 5;
    
    int b = ++a;
    printf("After b = ++a; -> a = %d, b = %d\n", a, b);
    
    int c = a++;
    printf("After c = a++; -> a = %d, c = %d\n", a, c);
    
    int d = --a;
    printf("After d = --a; -> a = %d, d = %d\n", a, d);
    
    int e = a--;
    printf("After e = a--; -> a = %d, e = %d\n", a, e);
    
    printf("\nFinal Values:\na = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
    return 0;
}
