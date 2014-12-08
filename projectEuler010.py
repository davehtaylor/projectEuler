# Summation of primes
#
# The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
#
# Find the sum of all the primes below two million.

# Initialize a list, primes, to hold all the primes.

primes = []

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

# Step through the numbers from 2 to 2000000 and see if they're prime.
# If so, add them to the primes[] list.

for i in xrange(2,2000000):
    if isPrime(i) == True:
        primes.append(i)

# Add up everything in the primes[] list and print out the sum.

print sum(primes)

# I'm not at all happy with this. I know that this code works, per se,
# as I tried it with the example numbers given, finding all the primes
# below 10 and adding them up. Which it did with much aplomb. However,
# as the range increases, so does the time it takes to evaluate it all. 
# I let this run for half an hour and it still didn't complete. So
# obviously, there's some sort of trick to this that I'm not seeing, or
# perhaps an well-known algorithm that I'm not familiar with. Because,
# while the code here technically works, it's obviously the wrong solution.
# I will continue to explore this problem in more depth and revise as my
# understanding of the maths involved here grows. 
