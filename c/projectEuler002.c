/* Find the sum of all even-valued Fibonacci terms less than 4 million. */

#include <stdio.h>

int even_fib(void);

int main(void)
{

    int answer = even_fib();

    printf("%d\n",answer);

    return 0;

}

/* The even_fib function generates the Fibonacci sequence. Start with three 
 * variables, N1, N2, and N3. We initialize N1 and N2 to 1. The calculation 
 * will be N3 = N1 + N2. This will generate the next term in the sequence. 
 * After that, the variables will be reassigned: N2 becomes N1 and N3 becomes 
 * N2, this way, every time through the loop, the sequence increments forward.
 * So if we begin, with N1 = 1 and N2 = 2, then N3 will calculate to 2. 
 * Then, N1 becomes 1, N2 becomes 2 and N3 will then calculate to 3. And so
 * on and so forth. 
 *
 * Each time through the loop, the current N3 is evaluated to see if it 
 * is even. If so, it is added to the sum variable. We keep doing this
 * until we reach 4,000,000, and then return the sum variable. */

int even_fib(void)
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
