# by Adam Porembinski
#
# Problem 4 from ProjectEuler.net
# A palindromic number reads the same both ways.
# The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from the product of two 3-digit numbers.

# NOT WORKING!!

maxXdigit = 999
minXdigit = 100
wynik = "----"

a = maxXdigit
b = maxXdigit
c = 0
nieZnaleziony = True

# a going to 1000
while nieZnaleziony:
	# b going to 1000
	while True:
		c = a * b

		napis1 = str(c)
		napis2 = napis1[::-1]
		#print(napis1)

		if napis1 == napis2:
			nieZnaleziony = False;
			wynik = napis1
			break

		b = b - 1
		if b < minXdigit:
			b = maxXdigit
			break
	a = a - 1
print(wynik)
