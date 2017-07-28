#include <stdio.h>
#include <stdlib.h>

/* The Fibonacci Sequence is the series of numbers: 0 1 1 2 3 5 8 13 21 34 55 89... */

int fibonacci(int number){
    if (number<=1)
        return number;
    return fibonacci(number-1) + fibonacci(number-2);
}

int main()
{
    int num;
    printf("Enter is number: ");
    scanf("%d", &num);
    printf("%d.Fibonacci number is %d", num, fibonacci(num));
    return 0;
}
