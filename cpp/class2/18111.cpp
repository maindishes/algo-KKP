/**
 * 마인크래프트
 * 18111
 * 입력:
3 4 1
64 64 64 64
64 64 64 64
64 64 64 63
*/


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n,m,b;
    std::cin >> n>> m>> b;

    int sbox[n][m];
    std::vector<std::vector<int> > boxx;
    std::vector<int> box;
    int temp;
    // std::vector<std::vector<
    // std::cout << box[0][0] << std::endl;
    for(int i=0; i< n; ++i) {
        for(int j =0; j<m; ++j) {
            std::cin >> temp;
            box.push_back(temp);
        }
        boxx.push_back(box);
        box.clear();
    }
    std::cout << boxx[n-1][m-1] << std::endl;
    

}