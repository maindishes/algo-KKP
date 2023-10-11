
/*
150
266
427
--
3
1
0
2
0
0
0
2
0
0
*/
#include <iostream>
#include <string>

int main() {
    int inum;
    int inum2;
    int inum3;

    std::cin >> inum >> inum2 >> inum3;
    long long result = inum * inum2 * inum3;
    std::string istring = std::to_string(result);
    // std::cout << istring << std::endl;
    int arrayNum[11] = { 0,};
    for(size_t i =0; i < istring.size(); i++)
    {
        // std::cout << istring[i] << std::endl;
        int digit = istring[i] - '0'; 
        arrayNum[digit] += 1;
    }
    for(int i =0; i < 10; ++i) {
     std::cout << arrayNum[i] << "\n";
    }
    // std::cout << std::endl;
}