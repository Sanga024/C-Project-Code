#include<iostream>
using namespace std;

void printOddNumbers(int start, int end) {
    cout << "Odd numbers between " << start << " and " << end << ": ";

    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    // Example usage
    int startingValue = 12;
    int endingValue = 23;

    // Call the function with the given parameters
    printOddNumbers(startingValue, endingValue);

    return 0;
}

