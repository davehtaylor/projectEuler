# What is the largest prime factor of the number 600851475143 ?

startingNum = 600851475143


def lowest(i):
    """Find the lowest whole number the input number is divisible by."""
    n = 2
    while i % n != 0:
        n = n+1
    return n


def isPrime(i):
    """Determine if the input number is prime."""
    if i == lowest(i):
        return True
    else:
        return False


def factor(startingNum):
    """Perform the factorization"""

    topLevel = startingNum
    branch1 = 0
    branch2 = 0

    # If the input number is prime, no need to factor
    if isPrime(startingNum) == True:
        return startingNum

    else:
        while isPrime(branch2) == False:
            branch1 = lowest(topLevel)
            branch2 = topLevel / branch1

            topLevel = branch2

        return branch2


print factor(startingNum)
