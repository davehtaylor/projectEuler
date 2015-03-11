/* Find the largest palindrome made from the product of two 3-digit numbers */

#include <stdio.h>

int reverseNum(int);
int palindrome(void);

int main(void)
{
    int answer = palindrome();
    printf("%d\n", answer);
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

/* Find the largest palindrome */
int palindrome(void)
{
    int num1;
    int num2;
    int product;
    int palindrome;

    for (num1 = 100; num1 < 1000; num1++)
    {
        for (num2 = 100; num2 < 1000; num2++)
        {
            product = num1 * num2;

            /* Check if the product is a palindrome and also if it is 
             * larger than the last palindrome in the loop. */
            if (product == reverseNum(product) && product > palindrome)
            {
                palindrome = product;
            }     

        }
       
    }

    return palindrome;

}
