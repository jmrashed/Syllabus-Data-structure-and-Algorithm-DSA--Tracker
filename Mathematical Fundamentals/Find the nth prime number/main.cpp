#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<bool> isPrime(n * log(n) + n * log(log(n)) + 3, true);
    vector<int> primes;

    // Implement the Sieve of Eratosthenes algorithm
    for (int p = 2; p * p <= n * log(n) + n * log(log(n)) + 3; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n * log(n) + n * log(log(n)) + 3; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Store the prime numbers in the 'primes' vector
    for (int p = 2; p <= n * log(n) + n * log(log(n)) + 3; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    // Print the nth prime number
    if (n <= primes.size()) {
        cout << "The " << n << "th prime number is: " << primes[n - 1] << endl;
    } else {
        cout << "Sorry, couldn't find the " << n << "th prime number." << endl;
    }

    return 0;
}
