/* Find the sum of all numbers less than 1000 which are multiples of 3 or 5 */

#include <stdio.h>

int multiplesOfThree(int);

int main(void) 
{
    
    int maxNum = 1000;
    int answer = multiplesOfThree(maxNum);

    printf("%d\n",answer);    

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
