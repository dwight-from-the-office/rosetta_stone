#include <iostream>

using namespace std;


int arr[5] = {10, 20, 30, 40, 50};

// pointer to first element in array {10}
int *ptr1 = &arr[0]; 

int *ptr2 = &arr[1];

int main() {
    cout << *ptr1 << endl;
    cout << *ptr2;
}