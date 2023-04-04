// by Adam Porembinski
//
// The sum of the squares of the first ten natural numbers is 385,
// The square of the sum of the first ten natural numbers is 3025,
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385=2640
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <cstdio>

int main()
{
    unsigned long long wynik = 0;
    
    int maxliczba = 10;
    int aktualna = 1;
    
    unsigned long long SumaKwad = 0;
    unsigned long long KwadSumy = 0;
    
    for(int i=1; i <= maxliczba; i++)
    {
        SumaKwad = SumaKwad + (i * i);
    }
    
    for(int i=1; i <= maxliczba; i++)
    {
        KwadSumy = KwadSumy + i;
    }
    KwadSumy = KwadSumy * KwadSumy;
    
    wynik = KwadSumy - SumaKwad;
    
    printf("%llu",wynik);
    return 0;
}
