#include <iostream>
#include <string>
using namespace std;

class Box {
    private:
        string name;
    public:
        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void sayHello() {
            cout << "hello" << endl;
        }
};

int main() {
    Box b0;
    b0.setName("Shiyu");
    cout << b0.getName() << endl;
    return 0;
}