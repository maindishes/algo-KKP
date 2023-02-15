/**
 * 랜선 자르기
 * 2023-2-15 
 * #1654
 * 
입력:
4 11
802
743
457
539
출력:
200
*/

#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    int n,k;
    std::cin >> n >> k;
    std::vector<int> ivec;
    int temp;
    for(int i =0; i< n; ++i) {
        std::cin >> temp;
        ivec.push_back(temp);
    }
    sort(ivec.begin(),ivec.end(),std::greater<int>());
    // std::cout << ivec[0] << std::endl;
    // 1. K개로 만들어야함. ??
    // k개로 만든것들중 제일 크게 한것을 골라야함
    // 노우 제일 큰것부터 아래로 K개를 만들면 됨. 
    // 그럼 만드는 게 K개 되는 순간 바로 break;
    // 근데 애초에 K개로 어떻게 만드지 

    // 802 743 539 457
    // 457 539 743 802
    //  
}
