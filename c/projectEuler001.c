#include <stdio.h>

/* Function protopye. */

int multiplesOfThree();

/* Main */

void main(void) {
    
    int maxNum = 1000;
    int answer = multiplesOfThree(maxNum);

    printf("%d\n",answer);    
    
}

/* Function Definitions */

/* This is the function that performs this calculation. Find the sum
 * of all numbers less than 1000 which are multiples of 3 or 5 */

int multiplesOfThree(inputNum){
    
    /* Define an iterator variable for the loop and a variable to 
     * hold the sum of the multiples of 3 and 5 */

    int iterator = 1;
    int sum = 0;

    while (iterator < inputNum) {

        /* If the iterator is a multipe of 3 or 5, add it to the sum */

        if (iterator % 3 == 0 || iterator % 5 == 0) {
            sum += iterator;
        }
        
        /* Increment the iterator after each trip through the loop */

        iterator++;
    }
    
    /* Return the sum of the multiples of 3 and 5 */

    return sum;
}
