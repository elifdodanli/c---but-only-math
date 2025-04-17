// Find the maximum of three numbers.

#include <iostream>
using namespace std;
int findMax(int a,int b, int c);
int main(){
    int x, y, z;

    cin >> x;
    cin >> y;
    cin >> z;

    cout <<  "The maximum value of these numbers is " << findMax(x,y,z) << endl;

    return 0;
}
int findMax(int a,int b, int c){
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}