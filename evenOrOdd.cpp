// Is a number even or odd?
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter an integer number: ";
    cin >> num;
    if (num < 0) {
    cout << "integer must be greater than zero";
    }
    else {
        if (num % 2 == 0){
            cout << "the number is even";
        }
        else{
            cout << "the number is odd";
        }
    }
    
}