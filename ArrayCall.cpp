#include <iostream>
using namespace std;

// Call by Value Function
void callByValue(int x) {
    cout << "Inside Call by Value Function" << endl;
    x = x * 2;
    cout << "Modified Value: " << x << endl;
}

// Call by Reference Function
void callByReference(int &x) {
    cout << "Inside Call by Reference Function" << endl;
    x = x * 2;
    cout << "Modified Value: " << x << endl;
}

// Call by Address Function
void callByAddress(int *x) {
    cout << "Inside Call by Address Function" << endl;
    *x = *x * 2;
    cout << "Modified Value: " << *x << endl;
}

int main() {
    int num = 5;
    
    cout << "Original Value: " << num << endl;

    // Call by Value
    callByValue(num);
    cout << "Value after Call by Value Function: " << num << endl;
    
    // Call by Reference
    callByReference(num);
    cout << "Value after Call by Reference Function: " << num << endl;

    // Call by Address
    callByAddress(&num);
    cout << "Value after Call by Address Function: " << num << endl;

    return 0;
}
