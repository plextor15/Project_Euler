// by Adam Porembinski
//
// Problem 3 from ProjectEuler.net
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <cstdio>

int main() 
{
    unsigned long number = 600851475143;
    unsigned long dzielnik = 2;
    unsigned long wynik;
    
    while(true)
    {
        if(dzielnik * dzielnik > number)
        {
            wynik = number;
            break;
        }
        
        if(number % dzielnik == 0)
        {
            // printf("%ul \n", dzielnik);  //DEBUG ONLY!!
            number = number / dzielnik;
        }
        else
        {
            dzielnik++;
        }
    }
    
    printf("%lu", wynik);
    return 0;
}
