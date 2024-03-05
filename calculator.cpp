#include <iostream>
using namespace std;

int main(){

    /*Simple calculator*/

    int firstValue, secondValue;
    char action;

    cout << "Insert first value: ";
    cin >> firstValue;
    cout << "Insert second value: ";
    cin >> secondValue;
    cout << "Select action: +, -, / or *: ";
    cin >> action;

    switch (action) {
        case '+':
            cout << "Result: " << firstValue + secondValue << endl;
            break;
        case '-':
            cout << "Result: " << firstValue - secondValue << endl;
            break;
        case '/':
            cout << "Result: " << firstValue / secondValue << endl;
            break;
        case '*':
            cout << "Result: " << firstValue * secondValue << endl;
    }

    return 0;
}