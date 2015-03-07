/* What is the largest prime factor of 600851475143 ? */

#include <stdio.h>
#include <stdbool.h>

int lowest(int);
bool isPrime(int);
int factor(int);

int main(void)
{
/*    int startingNum = 600851475143; */
    int startingNum = 100;
    int answer = factor(startingNum);
    printf("%d\n", answer);
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
    if (inputNum == lowest(inputNum))
    {
        return true;
    }
    else {
        return false;
    }
}

/* Perform the factorization */
int factor(int inputNum)
{
    int topLevel;
    int branch1;
    int branch2;

    while (isPrime(branch2) == false)
    {
        topLevel = inputNum;
        branch1 = lowest(topLevel);
        branch2 = topLevel / branch1;

        topLevel = branch2;
    }

    return branch2;
}
