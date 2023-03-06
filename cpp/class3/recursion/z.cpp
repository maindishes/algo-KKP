// 재귀 연습 #1
#include <iostream>

void fuck1(int n) {
    if (n == 0)
        return ; 
    std::cout << n << " "; 
    fuck1(n-1);
}

int main() {
    fuck1(3);
}