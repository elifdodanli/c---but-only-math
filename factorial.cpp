#include <iostream>
using namespace std;
int factorial(int n, int f);
int main( ){
    int n, f = 1;

    cout << "enter a positive integer: ";
    cin >> n;
    cout << "factorial of " << n << " is " << factorial( n,  f);
    return 0;
}

int factorial(int n, int f){
    

    for(int i=1; i<=n; ++i){
        f *= i;
        
    }
    return f;
    
}