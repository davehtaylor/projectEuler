/* Find the sum of all the primes below two million. */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(unsigned long);
unsigned long sumOfPrimes(long);

int main(void)
{
    printf("%d\n", sumOfPrimes(2000000));
    return 0;
}

/* Determine if the input number is prime  */
bool isPrime(unsigned long inputNum)
{
    if (inputNum == 1)
    {
        return false;
    }
    else if (inputNum == 2 || inputNum == 3 || inputNum == 5 || inputNum == 7)
    {
        return true;
    }
    else if (inputNum % 2 == 0)
    {
        return false;
    }
    else if (inputNum % 3 == 0)
    {
        return false;
    }
    else if (inputNum % 5 == 0)
    {
        return false;
    }
    else if (inputNum % 7 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

/* Calculate sum of primes below a given number */
unsigned long sumOfPrimes(long max)
{
    unsigned long i;
    unsigned long sum = 0;

    for (i = 2; i < max; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    return sum; 

}
