/* What is the smallest positive number that is evenly divisible by all of
 * the numbers from 1-20? */

#include <stdio.h>
#include <stdbool.h>

bool divisibility_test(long);
long divide(void);

int main(void)
{
    long answer = divide();
    printf("%d\n", answer);
    return 0;
}

/* Test if the input number is divisible by 1-20. If it's divisible
 * by 11-20, then it is also divisible by 1-10, so we only need
 * to test for divisiblity by 11-20. */
bool divisibility_test(long input_num)
{
    if (input_num % 11 == 0 &&
        input_num % 12 == 0 &&
        input_num % 13 == 0 &&
        input_num % 14 == 0 &&
        input_num % 15 == 0 &&
        input_num % 16 == 0 &&
        input_num % 17 == 0 &&
        input_num % 18 == 0 &&
        input_num % 19 == 0 &&
        input_num % 20 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* This is the function that does the division. */
long divide(void)
{
    long i = 2520;

    while (divisibility_test(i) == false)
    {
        i++;
    }

    return i;

}
