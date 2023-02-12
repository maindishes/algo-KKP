#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    int inum;
    std::cin >> inum;
    int a = inum;
    int flag = 0;
    if (inum > 100) {
        a = inum - 9 * std::to_string(a).length();
    } else {
        a = 1;
    }
    for (int i = a; i < inum; i++) {
        std::string s = std::to_string(i);
        int temp = 0;
        for (int k = 0; k < s.length(); k++) {
            temp += s[k] - '0';
        }
        if (temp + i == inum) {
            std::cout << i << std::endl;
            flag = 1;
            break;
        }
    }
    if (flag != 1) {
        std::cout << 0 << std::endl;
    }
    return 0;
}