# What is the smallest positive number that is evenly divisible
# by all of the numbers from 1 to 20?

def divide():
    """Find the number that is the smallest positive number 
    that is evenly divisible by all of the numbers from 1 to 20
    """
    # Start at 2520, since the number won't be smaller than this
    i = 2520

    while ((i%11 == 0) and \
            (i%12 == 0) and \
            (i%13 == 0) and \
            (i%14 == 0) and \
            (i%15 == 0) and \
            (i%16 == 0) and \
            (i%17 == 0) and \
            (i%18 == 0) and \
            (i%19 == 0) and \
            (i%20 == 0)) == False:
        i += 1

    return i

print divide()
