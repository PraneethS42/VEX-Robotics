#include "calculator.h"
#include <iostream>
using namespace std;

int myCustomAdd(int a, int b) {
    return a + b;
}

int main() {
    cout << myCustomAdd(4,5);
}