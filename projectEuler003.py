# Largest prime factor
#
# The prime factors of 13195 are 5, 7, 13 and 29.
#
# What is the largest prime factor of the number 600851475143 ?

startingNum = 600851475143      # Number to factor
primeFactors = []               # Array to hold list of prime factors

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


