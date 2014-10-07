# Project Euler Problem 1
#
# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
#
# Find the sum of all the multiples of 3 or 5 below 1000.

i = 1                  # variable for all numbers below 1000
threeAndFive = []     # list to hold the numbers that are multiples of 3 and 5

for i in range (1,1000):
    if i%3 == 0  or i%5 == 0:
        threeAndFive.append(i)    # append all of the mulitples of 3 and 5 to the list

print sum(threeAndFive)           # print out the sum of all the numbers in the list
