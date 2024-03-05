

#include<iostream>
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

void calculateFactorialIfPrime(int num) {
    if (isPrime(num)) {
        cout << "Factorial of " << num << ": " << factorial(num) << endl;
    } else {
        cout << "Error! " << num << " is not a prime number." << endl;
    }
}

int main() {
    // Example usage
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    // Call the function with the given parameter
    calculateFactorialIfPrime(inputNumber);

    return 0;
}
