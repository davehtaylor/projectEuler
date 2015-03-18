# Find the largest palindrome made from the product of two 3-digit
# numbers.

palindromes = 0
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
        product = num1 * num2
        if str(product) == reverse(product) and product > palindromes:
            palindromes = product

print palindromes
