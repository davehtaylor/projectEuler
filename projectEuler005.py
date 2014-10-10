# Smallest multiple
#
# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
#
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

i = 20

while ((i%1 == 0) and (i%2 == 0) and (i%3 == 0) and (i%4 == 0) and (i%5 == 0) and (i%6 == 0) and (i%7 == 0) and (i%8 == 0) and (i%8 == 0) and (i%10 == 0) and (i%11 == 0) and (i%12 == 0) and (i%13 == 0) and (i%14 == 0) and (i%15 == 0) and (i%16 == 0) and (i%17 == 0) and (i%18 == 0) and (i%19 == 0) and (i%20 == 0)) == False:
    i += 1

print i

# This produces the correct answer, but is currently extremely slow, taking almost a full minute to calculate the answer. So I'm sure there's probably a more efficient way to do this. I will investgate and update as I learn more.
