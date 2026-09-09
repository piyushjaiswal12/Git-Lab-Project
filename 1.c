#include <stdio.h>

int main() {
    int n;
    
    printf("Enter an integer n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Testing with n = %d:\n", n);
    printf("  +n  = %d\n", +n);
    printf("  -n  = %d\n", -n);
    printf("  !n  = %d\n", !n);
    printf("  !!n = %d\n\n", !!n);
    
    return 0;
}