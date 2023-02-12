// 2 -> 1666
#include <iostream>
#include <string>

int main() {
    int inum;
    std::cin >> inum;
    std::string ss = "666";
    int i = 1;
    int cnt = 0;
    std::string temp;
    while(cnt != inum) {
        ++i;
        temp = std::to_string(i);
        if(temp.find(ss) != std::string::npos)
            ++cnt;    
    }
    std::cout << i << std::endl;
}