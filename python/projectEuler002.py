# By considering the terms in the Fibonacci sequence whose values do
# not exceed four million, find the sum of the even-valued terms.

def evenFib(maxNum):
    """Add the even Fibonacci numbers up to the given max"""
    N1 = 1
    N2 = 1
    N3 = 0
    sum = 0

    while N3 < maxNum:
        
        N3 = N1 + N2

        if N3 % 2 == 0:
            sum += N3

        N1 = N2
        N2 = N3

    return sum

print evenFib(4000000)
