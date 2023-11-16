// by Adam Porembinski
//
// By listing the first six prime numbers: 2, 3, 5 and 7, we can see that the 6th prime is 13.
// What is the 1001st prime number ?

#include <cstdio>

bool czyPrime(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int nthPrime(int n) {
    int znalezione = 0;
    int curr_liczba = 1;

    while (znalezione < n) {
        curr_liczba++;
        if (czyPrime(curr_liczba)) {
            znalezione++;
        }
    }

    return curr_liczba;
}

int main() {
    int n = 10001;
    int wynik = nthPrime(n);

    if (wynik != -1) {
        printf("\nWynik to: %i\n\n", wynik);
    }

    return 0;
}
