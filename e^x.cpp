// Taylor series of e^x
#include <iostream>
#include <cmath>
using namespace std;
int getFactorial(int n);

int main() {
    float x = 2;
    int n = 3;
    float sum; 
    
    sum = pow(x, n)/ getFactorial(n);
    cout << sum;
}
int getFactorial(int n){
        int f= 1;
        for (int i = 1; i <= n; i++){
        f*= i;
        }
        return f;
    }