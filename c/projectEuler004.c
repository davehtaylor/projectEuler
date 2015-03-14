/* Find the largest palindrome made from the product of two 3-digit numbers */

#include <stdio.h>

int reverse_num(int);
int palindrome(void);

int main(void)
{
    int answer = palindrome();
    printf("%d\n", answer);
    return 0;
}

/* A function to reverse a number */
int reverse_num(int input_num)
{
    int reverse = 0;

    while(input_num)
    {
        reverse *= 10;
        reverse = reverse + input_num % 10;
        input_num = input_num / 10;
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
             * larger than the last palindrome in the loop. Otherwise,
             * we would just find the last palindrome, but not necessarily
             * the biggest. */
            if (product == reverse_num(product) && product > palindrome)
            {
                palindrome = product;
            }     

        }
       
    }

    return palindrome;

}
