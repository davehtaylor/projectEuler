/* Find the sum of all even-valued Fibonacci terms less than 4 million. */

#include <stdio.h>

int evenFib(void);

int main(void)
{
    int answer = evenFib();
    printf("%d\n",answer);
}

int evenFib(void)
{
    int N1 = 1;
    int N2 = 1;
    int N3;
    int sum = 0;

    while (N3 < 4000000)
    {
        N3 = N1 + N2;

        if (N3 % 2 == 0)
        {
            sum += N3;
        }

        N1 = N2;
        N2 = N3;
    }

    return sum;
}
