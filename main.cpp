// Ryuya Hirota
// CIS25
// Swaps 2 ints with a function using pointers

#include <iostream> // std::cout


// swaps the 2 integers using pointers
void swap(int *x, int *y) {
    int t = *x; // temp storage to swap other
    *x = *y; // set content of x to the content of y
    *y = t; // set content of y to content of t (old x)
}

int main() {

    // test case
    int a = 6;
    int b = 3;

    std::cout << "a: " << a << ", b: " << b << std::endl; // prints "a: 6, b: 3"
    swap(&a, &b);
    
    std::cout << "a: " << a << ", b: " << b << std::endl; // prints "a: 3, b: 6"
    return 0;
}
