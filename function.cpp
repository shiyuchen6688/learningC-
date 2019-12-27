#include <iostream>

using namespace std;

// prototyping a function
void doSomething();

int main() {
    doSomething();
    return 0;
}


// you have to create this method before you use it, put this on top of main
// // or you can also declare it first
void doSomething() {
    cout << "I am doing something!\n";
}