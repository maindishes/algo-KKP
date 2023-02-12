#include <iostream>
#include <vector>

//  6 12 18 24
// 1 7 19 37 61 
int main() {
    int inum;
    int i =1;
    int k = 0;
    int cnt = 0;
    std::cin >> inum;
    while(1) {
        i = i+(6*k);
        ++k;
        ++cnt;
        if (i >= inum)
            break;
    }
    std::cout << cnt << std::endl;
}