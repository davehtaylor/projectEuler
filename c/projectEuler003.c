/* What is the largest prime factor of 600851475143 ? */

#include <stdio.h>
#include <stdbool.h>

int lowest(int);
bool isPrime(int);


int main(void)
{
    int startingNum = 600851475143;

}

/* Find the lowest whole number the input number is divisible by */
int lowest(int inputNum)
{
    int n = 2;

    while (inputNum % n != 0)
    {
        n = n + 1
    }

    return n
}

/* Determine if the number is prime */
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
