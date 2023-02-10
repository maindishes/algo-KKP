// 10
// 5
// 2
// 3
// 1
// 4
// 2
// 3
// 5
// 1
// 7
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>
#include <cstdio>

int main() {
    // std::priority_queue<int,std::vector<int>, std::greater<int> > iq;
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int num;
    std::cin >> num;
    int temp;
    std::vector<int> ivec(10001,0);
    // std::cout << ivec[1] << std::endl;
    int max=0;
    for(int i =0; i<num; ++i ) {
        std::cin >> temp;
        if (max < temp)
            max = temp;
        ivec[temp] += 1;
    }
    for(int j=0; j<max+1; ++j) {
        if(ivec[j] == 0)
            continue;
        for(int k = 0; k< ivec[j]; ++k) {
            std::cout << j << "\n";
        }
    }
}



// 메모리.. temp에 저장해서 넣으면 안 되나? 