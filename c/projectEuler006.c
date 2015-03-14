/* Find the difference between the sum of the squares of the first 
 * one hundred natural numbers, and the square of the sums. */

#include <stdio.h>

long square(long);
long sum_of_squares(void);
long square_of_sums(void);

long main(void)
{
    long answer = square_of_sums() - sum_of_squares();
    printf("%d\n", answer); 
    return 0;
}

/* A function to square a number */
long square(long input_num)
{
    long square = input_num * input_num;

    return square;
}

/* Sum the squares */
long sum_of_squares(void)
{
    int i;
    long sum = 0;

    for (i=1; i<=100; i++)
    {
        sum += square(i);
    }

    return sum;

}

/* Square the sums */
long square_of_sums(void)
{
    int i;
    long sum = 0;
    long squared_sum;

    for (i=1; i<=100; i++)
    {
        sum += i;
    }

    squared_sum = square(sum);

    return squared_sum;

}
