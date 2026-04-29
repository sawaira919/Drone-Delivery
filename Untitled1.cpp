#include <iostream>
using namespace std;
#3#33445
int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        std::cout << "Error! Factorial of a negative number doesn't exist.";
    } else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
