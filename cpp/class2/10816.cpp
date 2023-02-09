/**
 * 숫자카드
 * 10816
 * 2023-2-9
 * 입력 :
10
6 3 2 10 10 10 -10 -10 7 3
8
10 9 -5 2 3 4 5 -10
*/

#include <iostream>
#include <map>

// void print_map(std::map<int, int>& m) {
//     for (std::map<int, int>::iterator itr = m.begin(); itr != m.end(); ++itr) {
//         std::cout << itr->first << " " << itr->second << "\n";
//     }
// }

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int num1;
    std::cin >> num1;
    std::map<int,int> n_map;
    int temp;
    for(int i =0; i<num1; ++i) {
        std::cin >> temp;
        // std::cout << temp << std::endl;
        ++n_map[temp];
    }
    // print_map(n_map);
    // std::cout << n_map[-101] << std::endl;

    int num2;
    std::cin >> num2;
    
    for(int i=0; i< num2; ++i) {
        std::cin >> temp;
        std::cout << n_map[temp] << " ";
    }
    std::cout << "\n";
}