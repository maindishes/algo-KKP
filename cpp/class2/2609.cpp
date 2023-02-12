#include <iostream>

int main() {
    int a,b;
    std::cin >> a >> b;
    int  ab = a*b;
    if (a < b)
        std::swap(a,b);
    // std::cout << a << " " <<  b << std::endl;
    int inum;
    int temp;
    while( inum != 0) {
        inum = a % b;
        a = b;
        b = inum;
        // std::cout << b << " " << inum << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << ab/a << std::endl;
}