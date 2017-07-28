#include <stdio.h>
#include <stdlib.h>

/*int factorial(int number){
    if (number == 0)
        return 1;
    return number*factorial(number-1);
}*/

int factorial(int number){
    int result=1, i;
    for (i=2;i<=number;i++)
        result = result * i; //result*=i;
    return result;
}

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Factorial of %d of %d", num, factorial(num));
    return 0;
}
