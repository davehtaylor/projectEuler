# Project Euler Problem 1
#
# If we list all the natural numbers below 10 that are multiples of
# 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
#
# Find the sum of all the multiples of 3 or 5 below 1000.


# Initialize a list, threeAndFive,  to hold the numbers that
# are multiples of 3 and 5.

threeAndFive = 0

# Test if each number from 1 - 1000 is a multiple of 3 or 5, and 
# if so, append the number to the threeAndFive list.

for i in xrange(1,1000):
    if i%3 == 0  or i%5 == 0:
        threeAndFive = threeAndFive + i

# Print out the sum of all the numbers in the threeAndFive list

print threeAndFive
