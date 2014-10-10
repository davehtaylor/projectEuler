# Largest palindrome product
#
# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
#
# Find the largest palindrome made from the product of two 3-digit numbers.

palindromes = []                    # List to hold all of the palindromes

def reverse(i):                     # A procedure to reverse a number 
    i = str(i)                      # First convert the number to a string
    revstring = i[::-1]             # Then reverse it
    return revstring

for i in xrange (10000,998001):     # Start from lowest number that is the product of two 3-digit numbers: 100 x 100, and go to largest: 999 x 999
    if str(i) == reverse(i):        # Check if the number is the same backward and forward, i.e., a palindrome
        palindromes.append(i)       # If it is a palindrome, add it to the list
    i += 1

print palindromes[-1]               # Print out the largest palindrome. Currently, this is producing the incorrect answer. 
