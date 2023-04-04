// by Adam Porembinski
//
// Problem 5 from ProjectEuler.net
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?


#include <cstdio>

int main()
{
    int wynik = 0;

    int maxliczba = 10;
    int aktualna = 0 + maxliczba;
    bool niema = true;

    while (niema)
    {
        niema = false;
        for (int i = 1; i <= maxliczba; i++)
        {
            if (aktualna % i != 0)
            {
                niema = true;
            }
        }
        wynik = aktualna;
        aktualna = aktualna + maxliczba;
    }

    printf("%i", wynik);
    return 0;
}