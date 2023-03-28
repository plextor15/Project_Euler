// by Adam Porembinski
//
// Problem 1 from ProjectEuler.net
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <cstdio>

int main() 
{
  int below = 1000;
  int suma = 0;

  for(int i=0; i < below; i++)
  {
      if( i % 3 == 0 || i % 5 == 0 )
      {
          suma = suma + i;
      }
  }

  printf("Wynik: %i", suma);

  return 0;
}
