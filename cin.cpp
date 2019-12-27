#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int sum;

    // output string object
    cout << "Enter a number: \n";
    // input string object, >> you are giving information to the computer
    cin >> a;

    cout << "Enter a number: \n";
    cin >> b;

    sum = a + b;
    cout << "Your result is " << sum << endl;
    return 0;
}