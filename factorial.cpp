#include <iostream>
using namespace std;
int factorial(int n);
int main(){
    int n = 1;

    cout << "enter a positive integer: ";
    cin >> n;
    cout << "factorial of " << n << " is " << factorial(n);
    return 0;
}

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; ++i) {
        f *= i;
    }
    return f;
}