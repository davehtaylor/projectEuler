/* What is the 10,001st prime number? */

#include <stdio.h>
#include <stdbool.h>

int lowest(int);
bool is_prime(int);
int calculate_primes(int);

int main(void)
{
    printf("%d\n", calculate_primes(10001));
    return 0;
}

/* Find the lowest whole number the input number is divisible by */
int lowest(int input_num)
{
    int divisor = 2;

    while (input_num % divisor != 0)
    {
        divisor = divisor + 1;
    }

    return divisor;
}

/* Determine if the input number is prime*/
bool is_prime(int input_num)
{
    return input_num == lowest(input_num);
}

/* Function to find a particular prime. The variable prime_count is the 
 * particular prime we want to find. For example, if we want the 6th
 * prime, we iterate the loop until this variable reaches 6. Each time
 * through the loop, the prime variable is reassigned to the next prime
 * found and the prime_count variable is iterated by 1. Once the prime_count
 * variable reaches the specified number, the prime from that iteration is 
 * returned. */
int calculate_primes(int max)
{
    int i = 0;
    int prime;
    int prime_count = 0;

    while (prime_count != max)
    {
        if (is_prime(i) == true)
        {
            prime = i;
            prime_count++;
        }
        
        i++;
    }
    
    return prime;

}
