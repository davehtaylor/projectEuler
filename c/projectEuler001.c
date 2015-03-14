/* Find the sum of all numbers less than 1000 which are multiples of 3 or 5 */

#include <stdio.h>

#define MAXNUM 1000

int multiples_of_three(int);

int main(void) 
{
    printf("%d\n", multiples_of_three(MAXNUM));    

    return 0;

}

int multiples_of_three(int input_num)
{
    int i;
    int sum = 0;

    for (i = 1; i < input_num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}
