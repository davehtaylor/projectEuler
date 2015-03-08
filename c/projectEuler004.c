/* Find the largest palindrome made from the product of two 3-digit numbers */

#include <stdio.h>

int reverseNum(int);

int main(void)
{

    return 0;
}

/* A function to reverse a number */
int reverseNum(int inputNum)
{
    int reverse = 0;

    while(inputNum)
    {
        reverse *= 10;
        reverse = reverse + inputNum % 10;
        inputNum = inputNum / 10;
    }

    return reverse;
}
