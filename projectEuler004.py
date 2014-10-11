# Largest palindrome product
#
# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
#
# Find the largest palindrome made from the product of two 3-digit numbers.

palindromes = []                                   # List to hold all of the palindromes
num1 = 100                                         # Initialize variables two three-digit multiply so we can find the palindromes
num2 = 100

def reverse(i):                                    # A procedure to reverse a number 
    i = str(i)                                     # First convert the number to a string
    revstring = i[::-1]                            # Then reverse it
    return revstring

for num1 in xrange (100,1000):                     # For num1, go from 100 to 1000
    for num2 in xrange (100,1000):                 # For num2, go from 100 to 1000
        product = num1 * num2                      # Keep multiplying num1 and num2 all the way up to 1000
        if str(product) == reverse(product):       # If the product is a palindrome, add it to the palindromes[] list
            palindromes.append(product)

palindromes.sort()                                 # Sort the palindromes[] list

print palindromes[-1]                              # Print out the largest palindrome.
