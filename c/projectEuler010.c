/* Find the sum of all the primes below two million. */

#include <stdio.h>
#include <stdbool.h>

long lowest(long);
bool isPrime(long);
long sumOfPrimes(long);

int main(void)
{
/*    printf("%d\n", sumOfPrimes(10)); */
    printf("%d\n", isPrime(2));
    return 0;
}

/* Find the lowest whole number the input number is divisible by */
long lowest(long inputNum)
{
    int divisor = 2;

    while (inputNum % divisor != 0)
    {
        divisor = divisor + 1;
    }

    return divisor;
}

/* Determine if the input number is prime  */
bool isPrime(long inputNum)
{
    return inputNum == lowest(inputNum);
}

/* Calculate sum of primes below a given number */
long sumOfPrimes(long max)
{
    int i;
    int sum = 0;

    for (i=1; i<=max; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    return sum; 

}
