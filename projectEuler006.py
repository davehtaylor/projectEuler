# Sum square difference
#
# The sum of the squares of the first ten natural numbers is,
# 1^2 + 2^2 + ... + 10^2 = 385
#
# The square of the sum of the first ten natural numbers is,
# (1 + 2 + ... + 10)^2 = 55^2 = 3025
#
# Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
#
# Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

sums = []                                   # List to hold the numbers from 1-100
squares = []                                # List to hold the squares of the numbers from 1-100

for i in xrange (1,101):                    # Add the numbers 1-100 to the sums[] list
    sums.append(i)

for i in xrange (1,101):                    # Add the squares of the numbers from 1-100 to the squares[] list
    squares.append(i**2)

squareOfSums = (sum(sums)**2)               # Variable to hold the square of the sums
sumOfSquares = sum(squares)                 # Variable to hold the sum of the squares
difference = (squareOfSums - sumOfSquares)  # Variable to hold the difference between the square of the sums and the sum of the squares

print difference                            # Print out the difference
