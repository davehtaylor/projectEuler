/* What is the 10,001st prime number? */

#include <stdio.h>
#include <stdbool.h>

int lowest(int);
bool isPrime(int);
int calculatePrimes(int);

int main(void)
{
    printf("%d\n", calculatePrimes(10001));
    return 0;
}

/* Find the lowest whole number the input number is divisible by */
int lowest(int inputNum)
{
    int divisor = 2;

    while (inputNum % divisor != 0)
    {
        divisor = divisor + 1;
    }

    return divisor;
}

/* Determine if the input number is prime */
bool isPrime(int inputNum)
{
    return inputNum == lowest(inputNum);
}

/* Function to find a particular prime. The variable primeCount is the 
 * particular prime we want to find. For example, if we want the 6th
 * prime, we iterate the loop until this variable reaches 6. Each time
 * through the loop, the prime variable is reassigned to the next prime
 * found and the primeCount variable is iterated by 1. Once the primeCount
 * variable reaches the specified number, the prime from that iteration is 
 * returned. */
int calculatePrimes( int max)
{
    int i = 0;
    int prime;
    int primeCount = 0;

    while (primeCount != max)
    {
        if (isPrime(i) == true)
        {
            prime = i;
            primeCount++;
        }
        
        i++;
    }
    
    return prime;

}
