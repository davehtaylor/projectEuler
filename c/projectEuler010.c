/* Find the sum of all the primes below two million. */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(unsigned long);
unsigned long sum_of_primes(long);

int main(void)
{
    printf("%d\n", sum_of_primes(2000000));
    return 0;
}

/* Determine if the input number is prime  */
bool is_prime(unsigned long input_num)
{
    if (input_num == 1)
    {
        return false;
    }
    else if (input_num == 2 || input_num == 3 || input_num == 5 || input_num == 7)
    {
        return true;
    }
    else if (input_num % 2 == 0)
    {
        return false;
    }
    else if (input_num % 3 == 0)
    {
        return false;
    }
    else if (input_num % 5 == 0)
    {
        return false;
    }
    else if (input_num % 7 == 0)
    {
        return false;
    }
    else
    { 
        return true;
    }
}

/* Calculate sum of primes below a given number */
unsigned long sum_of_primes(long max)
{
    unsigned long i;
    unsigned long sum = 0;

    for (i = 2; i < max; i++)
    {
        if (is_prime(i))
        {
            sum += i;
        }
    }

    return sum; 

}
