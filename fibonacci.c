#include <stdio.h>

int fibonacci(int amount);

int main() 
{
    fibonacci(20);
    return 0;
}

int fibonacci(int amount) 
{
    int a = 0;
    int b = 1;
    for (int i = 1; i <= amount; i++) {
        printf("%d\n", b);
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

