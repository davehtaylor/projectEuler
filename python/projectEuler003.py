# Largest prime factor
#
# The prime factors of 13195 are 5, 7, 13 and 29.
#
# What is the largest prime factor of the number 600851475143 ?

# Initialize a variable, startingNum, to hold the Number to factor
# Initialize an array, primeFactors, to hold list of prime factors

startingNum = 600851475143
primeFactors = []

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

def branches(i):
    """Begin the branching process in the Factor Tree."""
    branch1 = lowest(i)
    branch2 = i / branch1
    return branch1, branch2

def factorTree(startingNum):
    """Loop through the Factor Tree. branch1 will always be prime, so it is
    added to the primeFactors[] list. The tree then continues down branch2,
    branching out from there and repeating the process.
    """
    # First we start branch1 and branch2 with the startingNum.

    branch1, branch2 = branches(startingNum)

    # While branch2 is not prime, we continue factoring, changing the
    # output of branch1 and branch2 along the way to reflect the
    # current position in the tree.

    while isPrime(branch2) == False:
        branche1, branch2 = branches(branch2)
        primeFactors.append(branch1)
        branches(branch2)

        # Eventually, we'll reach the end and branch2 will be prime.
        # This is the end of the Factor Tree, and this number is also
        # added to the primeFactors[] list.

        if isPrime(branch2) == True:
            primeFactors.append(branch2)
            break

# Run the factorTree procedure.

factorTree(startingNum)

# Sort the primeFactors[] list to make sure they are in ascending order.

primeFactors.sort()

# Print out the last number in the primeFactors[] list, which should be
# the largest prime factor of the startingNum.

print primeFactors[-1] 
