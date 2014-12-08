# Largest palindrome product
#
# A palindromic number reads the same both ways. The largest palindrome
# made from the product of two 2-digit numbers is 9009 = 91 x 99.
#
# Find the largest palindrome made from the product of two 3-digit
# numbers.

# Initialize a list, palindromes, to hold all of the palindromes.
# Initialize two three-digit variables, num1 and num2, to  multiply
# so we can find the palindromes.

palindromes = []
num1 = 100
num2 = 100

def reverse(i):
    """Reverse a number. Start by converting it to a string, then
    returning the string printed in reverse.
    """
    i = str(i)
    revstring = i[::-1]
    return revstring

for num1 in xrange(100,1000):
    for num2 in xrange(100,1000):
        # Keep multiplying num1 and num2 all the way up to 1000
        product = num1 * num2
        if str(product) == reverse(product):
            # If the product is a palindrome, add it to the palindromes[] list
            palindromes.append(product)

# Sort the palindromes[] list

palindromes.sort()

# Print out the largest palindrome.

print palindromes[-1]
