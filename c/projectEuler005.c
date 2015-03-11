#include <stdio.h>
#include <stdbool.h>

bool divisibilityTest(long);
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
bool divisbilityTest(long inputNum)
{
    if (inputNum % 11 == 0 &&
        inputNum % 12 == 0 &&
        inputNum % 13 == 0 &&
        inputNum % 14 == 0 &&
        inputNum % 15 == 0 &&
        inputNum % 16 == 0 &&
        inputNum % 17 == 0 &&
        inputNum % 18 == 0 &&
        inputNum % 19 == 0 &&
        inputNum % 20 == 0)
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

    while (divisbilityTest(i) == false)
    {
        i++;
    }

    return i;

}
