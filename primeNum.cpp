#include <iostream>
using namespace std;
bool isPrime(int num);
long long factorial(int num);
/* the question is
 "Take a number from the user. If the number is prime,
 calculate the factorial and print it. If not, give the message "The number is not prime." */

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
 }

bool isPrime(int num) {
    if (num < 2) return false;

    for(int i = 2 ; i * i <= num;i++ ){
            if (num % i == 0) return false;
          
        }
        return true;
    }

long long factorial(int num) {
    long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

