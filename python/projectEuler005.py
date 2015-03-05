# Smallest multiple
#
# 2520 is the smallest number that can be divided by each of the
# numbers from 1 to 10 without any remainder.
#
# What is the smallest positive number that is evenly divisible
# by all of the numbers from 1 to 20?

# Start the evaluation by initializing a variable, i,  at 2520,
# since the answer can't be any smaller than this.

i = 2520

while ((i%11 == 0) and \
        (i%12 == 0) and \
        (i%13 == 0) and \
        (i%14 == 0) and \
        (i%15 == 0) and \
        (i%16 == 0) and \
        (i%17 == 0) and \
        (i%18 == 0) and \
        (i%19 == 0) and \
        (i%20 == 0)) == False:
    i += 1

# Every number is divisible by 1. If the number is divisible by
# 20, it's also divisible by 2, 4, 5, and 10. If it's divisible
# by 15, it's divisible by 3 and 5. If it's divisible by 12, it's
# also divisible by 2, 3, 4, and 6.

# if it's divisible by 14, it's also divisible by 2 and 7. If it's
# divisible by 16, it's also divisible by 2, 4, and 8.

# If it's divisible by 18, it's also divisible by 2 and 9. So,
# 1-10 don't need to be evaluated in the loop.

# Print out the number

print i

# It still takes more time than I would like to find the answer,
# but this is at least twice as fast as the previous iteration
# where it evaluated all numbers from 1-20.
