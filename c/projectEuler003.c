/* What is the largest prime factor of 600851475143 ? */

#include <stdio.h>
#include <stdbool.h>

long lowest(long);
bool is_prime(long);
long factor(long);

int main(void)
{

    long startingNum = 600851475143;
    int answer = factor(startingNum);

    printf("%d\n", answer);
    
    return 0;
}

/* Find the lowest whole number the input number is divisible by */
long lowest(long input_num)
{
    int divisor = 2;

    while (input_num % divisor != 0)
    {
        divisor = divisor + 1;
    }

    return divisor;
}

/* Determine if the input number is prime */
bool is_prime(long input_num)
{
    return input_num == lowest(input_num);
}

/* Perform the factorization */
long factor(long input_num)
{
    long top_level = input_num;
    long branch1;
    long branch2;

    /* If the input number is prime, don't bother factoring.
     * Otherwise, continue with the factorization process. */ 
    if (is_prime(input_num) == true)
    {
        return input_num;
    }
    else {

        while (is_prime(branch2) == false)
        {
            branch1 = lowest(top_level);
            branch2 = top_level / branch1;

            top_level = branch2;
        }

        return branch2;
    }
}
