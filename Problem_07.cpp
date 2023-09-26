// by Adam Porembinski
//
// By listing the first six prime numbers: 2, 3, 5 and 7, we can see that the 6th prime is 13.
// What is the 1001st prime number ?

#include <cstdio>

bool BruteDzielenie(int n)
{
	int i = 2;
	while ( (i*i) <= n )
	{
		if ( (n % i) == 0 && i != n )
		{
			return false;
		}
		i += 1;
	}

	return true;
}

int main()
{
	int wynik=0;
	int licznik = 0;
	int curr_liczba = 2;

	int i = 2;
	while (licznik < 1001)
	{
		if (BruteDzielenie(curr_liczba))
		{
			licznik += 1;
			//printf("%i - %i\n", curr_liczba, licznik);
		}
		curr_liczba += 1;
	}

	wynik = curr_liczba-1;
	printf("\nWynik to: %i\n\n", wynik);
	
	return 0;
}