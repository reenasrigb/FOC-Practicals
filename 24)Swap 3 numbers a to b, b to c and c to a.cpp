#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    temp = a; 
    a = b;     
    b = c; 
    c = temp;  
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
