#include <iostream>
#include <cmath>
using namespace std;

bool primeNumber(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
    	cout << i << endl;
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (primeNumber(n)) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}
