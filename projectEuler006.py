# Sum square difference
#
# The sum of the squares of the first ten natural numbers is,
# 1^2 + 2^2 + ... + 10^2 = 385
#
# The square of the sum of the first ten natural numbers is,
# (1 + 2 + ... + 10)^2 = 55^2 = 3025
#
# Hence the difference between the sum of the squares of the
# first ten natural numbers and the square of the sum is 
# 3025 - 385 = 2640.
#
# Find the difference between the sum of the squares of the
# first one hundred natural numbers and the square of the sum.

# Initialize a list, sums,  to hold the numbers from 1-100
# Initialize a list, squares, to hold the squares of the 
# numbers from 1-100

sums = []
squares = []

# Add the numbers 1-100 to the sums[] list

for i in xrange(1,101):
    sums.append(i)

# Add the squares of the numbers from 1-100 to the squares[] list

for i in xrange(1,101):
    squares.append(i**2)

# Variable to hold the square of the sums

squareOfSums = (sum(sums)**2)

# Variable to hold the sum of the squares

sumOfSquares = sum(squares)

# Variable to hold the difference between the square of the sums
# and the sum of the squares

difference = (squareOfSums - sumOfSquares)

# Print out the difference

print difference
