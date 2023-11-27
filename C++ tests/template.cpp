#include <iostream>

// Template function to swap two values of any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Example with integers
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    // Example with doubles
    double a = 3.14, b = 6.28;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
