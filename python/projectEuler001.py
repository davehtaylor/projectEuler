# Find the sum of all the multiples of 3 or 5 below 1000.

threeAndFive = 0

for i in xrange(1,1000):
    if i%3 == 0  or i%5 == 0:
        threeAndFive = threeAndFive + i

print threeAndFive
