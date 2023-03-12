/**
 * 1,2,3 더하기
 * 2023 3 11
3
4
7
10
*/

#include <iostream>
#include <vector>
#include <queue>

int dx[3] = {1,2,3};

int main() {

    std::vector<int> ivec(12);
    int inum;
    std::cin >> inum;
    int temp;
    ivec[1] = 1;
    ivec[2] = 2;
    ivec[3] = 4;
    for(int i =4; i< 12; ++ i)
    {
        ivec[i] = ivec[i-1]+ivec[i-2]+ivec[i-3];
    }

    while(inum--)
    {
        std::cin >> temp;
        std::cout << ivec[temp] << std::endl;
    }
}