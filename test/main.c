#include <stdio.h>

/*The function gets a limit and prints all the fibonacci numbers up to the givenlimit.
The function also returns the last fibonacci number in that limit.*/
unsigned long long int fib(int n);

int main()
{
    /*Gets the limit of the Fibonacci numbers.*/
    int n;
    scanf("%d", &n);

    if(n > 90)
    {
        printf("The limit is to high.\nThe max limit is up to 90!");
        return  1;
    }
    /*Prints the fibonacci up to the given limit.*/
    printf("The number is: %llu\n", fib(n));
    return 0;
}

unsigned long long int fib(int n)
{
    unsigned long long int one = 0, two = 1, fib = 0;
    int i = 0;

    if(n == 1)
        return 1;

    /*Prints the first one*/
    printf("%d: 1\n", ++i);
    for (i; i < n ; ++i)
    {
        fib = one + two;
        one = two;
        two = fib;
        printf("%d: %llu\n", i + 1, fib);
    }
    return fib;
}
