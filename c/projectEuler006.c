/* Find the difference between the sum of the squares of the first 
 * one hundred natural numbers, and the square of the sums. */

#include <stdio.h>

long square(long);
long sumOfSquares(void);
long squareOfSums(void);

long main(void)
{
    long answer = squareOfSums() - sumOfSquares();
    printf("%d\n", answer); 
    return 0;
}

/* A function to square a number */
long square(long inputNum)
{
    long square = inputNum * inputNum;

    return square;
}

/* Sum the squares */
long sumOfSquares(void)
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
long squareOfSums(void)
{
    int i;
    long sum = 0;
    long squaredSum;

    for (i=1; i<=100; i++)
    {
        sum += i;
    }

    squaredSum = square(sum);

    return squaredSum;

}
