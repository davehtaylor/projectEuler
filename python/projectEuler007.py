# What is the 10,001st prime number?

def lowest(i):
    """Find the lowest whole number the input number is divisible by."""
    n = 2
    while i % n != 0:
        n += 1
    return n

def isPrime(i):
    """Determine if the input number is prime."""
    if i == lowest(i):
        return True
    else:
        return False

def calculatePrimes(maxNum):
    """Find a particular prime"""
    i = 2
    primeCount = 0
    while primeCount != maxNum:
        if isPrime(i) == True:
            prime = i
            primeCount += 1
        i += 1 
    return prime

print calculatePrimes(10001)
