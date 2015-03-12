/* Find the sum of all numbers less than 1000 which are multiples of 3 or 5 */

#include <stdio.h>

#define MAXNUM 1000

int multiplesOfThree(int);

int main(void) 
{
    printf("%d\n", multiplesOfThree(MAXNUM));    

    return 0;

}

int multiplesOfThree(int inputNum)
{
    int i;
    int sum = 0;

    for (i = 1; i < inputNum; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}
