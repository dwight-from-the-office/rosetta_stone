#include <iostream>
#include <string>

using namespace std;

int val = 26;
int* ptr = &val;

int main() {
    cout << "Int:" << val;
    cout << "Pointer:" << ptr;
    cout << sizeof(ptr) << endl;
    return 0;
}