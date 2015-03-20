# Find the largest palindrome made from the product of two 3-digit
# numbers.


def reverse(i):
    """Reverse a number. Start by converting it to a string, then
    returning the string printed in reverse.
    """
    i = str(i)
    revstring = i[::-1]
    return revstring

def findPalindrome(startNum, endNum):
    """Find the largest palindrome from a particular range"""
    palindrome = 0

    for num1 in xrange(startNum,endNum):
        for num2 in xrange(startNum,endNum):
            product = num1 * num2
            if str(product) == reverse(product) and product > palindrome:
                palindrome = product

    return palindrome

print findPalindrome(100, 1000)
