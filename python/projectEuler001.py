# Find the sum of all the multiples of 3 or 5 below 1000.

def threeAndFive():
    """Find the sum of all the multiples of 3 or 5 below 1000."""
    total = 0
    
    for i in xrange(1,1000):
        if i%3 == 0  or i%5 == 0:
            total = total + i

    return total

print threeAndFive()
