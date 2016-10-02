#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, const char * argv []) {
    // insert code here...
    
    unsigned int inputNumber, total;
    unsigned int number = 0;
    
    cout << "Please input a number" << endl;
    
    cin >> inputNumber;
    
    while (inputNumber > number)
    {
        cout << ++number << endl;
        total += number;
    }
    
    cout << total;
    
    return 0;
}
