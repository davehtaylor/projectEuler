# 10001st prime
#
# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
#
# What is the 10,001st prime number?

primes = []                     # List to hold the prime numbers
i = 1                           # Variable to work our way up with, in order to look for primes

def lowest(i):                  # Procedure to find the lowest whole number the input number is divisible by
    n = 2
    while i % n != 0:
        n = n+1
    return n

def isPrime(i):                 # Procedure to determine if the input number is prime
    if i == lowest(i):
        return True
    else:
        return False

while len(primes) < 10001:      # Look at every number and decide if it is prime. If so, add it to the primes[] list, until the list length is 10001.
    i += 1
    if isPrime(i) == True:
        primes.append(i)

print primes[-1]                # Print out the 10001th prime
