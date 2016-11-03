// Project Euler
// Problem 6
//
// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385
//
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 55^2> = 3025
//
// Hence the difference between the sum of the squares of the first ten
// natural numbers and the square of the sum is 3025 − 385 = 2640.
//
// Find the difference between the sum of the squares of the first one
// hundred natural numbers and the square of the sum.


#include <iostream>
#include <vector>

//Function to add square roots.
//
//Arguments taken: a vector containing square roots
//
//Returns: sum of the elements of the input vector
int sum_of_squares(std::vector <int> squares) {

    int counter = 0;
    int sum = 0;

    while (counter < squares.size()) {
        sum += squares[counter];
        counter++;
    }

    return sum;
}


// Function to square a sum.
//
// Arguments taken: a vector containing natural numbers
//
// Returns: the square of the sum of the elements of the input vector
int square_of_sum(std::vector <int> nums) {

    int counter = 0;
    int sum_of_nums = 0;

    while (counter < nums.size()) {
        sum_of_nums += nums[counter];
        counter ++;
    }

    return sum_of_nums * sum_of_nums;
}


int main() {

    int counter = 1;
    std::vector <int> squares;
    std::vector <int> nums;

    while (counter <= 100) {
        squares.push_back(counter*counter);
        nums.push_back(counter);
        counter++;
    }

    std::cout << "The difference is: " 
        <<  square_of_sum(nums) - sum_of_squares(squares) << std::endl;

    return 0;
}
