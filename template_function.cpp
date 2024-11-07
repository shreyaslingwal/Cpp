
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add<int>(5, 10) << endl;
    cout << add<double>(5.4, 10.3) << endl;
    cout << add(3, 7) << endl;
    cout << add(3.1, 7.7) << endl;
    return 0;
}