/**
 * 거짓말
 * 2023 3 23 
 * 시간 : 30 분  +
 * 1번째 도전 실패 .. 들어오는 요소 를 어떻게 링크 시킬줄 모르겠다.
10 9
4 1 2 3 4
2 1 5
2 2 6
1 7
1 8
2 7 8
1 9
1 10
2 3 10
1 4
*/

#include <queue>
#include <iostream>
#include <vector>

int main() {
    int people;
    int partys;
    std::cin >> people >> partys;
    int who;
    std::cin >> who;
    std::vector<int> whoknows;
    int temp;
    for( int i = 0 ; i< who; ++i)
    {
        std::cin >> temp;
        whoknows.push_back(temp);
    }
    // std::vector<int> links(people+1,0);
    // (M, std::vector<int>(N, default_value));
    std::vector<std::vector<int>> link(people+1,std::vector<int>(people+1,0));
    for(int i =0; i< partys; ++i)
    {
        std::cin >> temp;
        for( int k =0; k< temp; ++k) {
            link[temp] = temp;
        }
    }
}