/* What is the largest prime factor of 600851475143 ? */

#include <stdio.h>
#include <stdbool.h>

long lowest(long);
bool isPrime(long);
long factor(long);

int main(void)
{

    long startingNum = 600851475143;
    int answer = factor(startingNum);

    printf("%d\n", answer);
    
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

/* Determine if the input number is prime */
bool isPrime(long inputNum)
{
    return inputNum == lowest(inputNum);
}

/* Perform the factorization */
long factor(long inputNum)
{
    long topLevel = inputNum;
    long branch1;
    long branch2;

    /* If the input number is prime, don't bother factoring.
     * Otherwise, continue with the factorization process. */ 
    if (isPrime(inputNum) == true)
    {
        return inputNum;
    }
    else {

        while (isPrime(branch2) == false)
        {
            branch1 = lowest(topLevel);
            branch2 = topLevel / branch1;

            topLevel = branch2;
        }

        return branch2;
    }
}
