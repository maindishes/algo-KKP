/**
 * 하노이탑
*/

#include <iostream>

void func(int a, int b, int n)
{
    if (n == 1) {
        std::cout << a << " " << b << "\n";
        return ;
    }
    func(a,6-a-b,n-1);
    std::cout << a << " " << b << "\n";
    func(6-a-b, b, n-1);
}
int main() {
    int k;
    std::cin >> k;
    func(1,3,k);
}