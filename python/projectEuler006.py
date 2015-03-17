# Find the difference between the sum of the squares of the
# first one hundred natural numbers and the square of the sum.

def squareOfSums(start, end):
    """Sums then squares the numbers given in the input range"""
    sum = 0 
    for i in xrange(start,end):
        sum += i

    return sum**2
  
def sumOfSquares(start, end):
    """Squares then sums the numbers in the given input range"""
    sum = 0
    for i in xrange(start, end):
        sum += i**2

    return sum

print squareOfSums(1, 101) - sumOfSquares(1, 101)
