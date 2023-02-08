/**
 * 소수 구하기
 * #1929
 * 2023-2-8
*/

#include <vector>
#include <iostream>



int main() {
    int a,b;
    std::cin >> a >> b;
    std::vector<int> vec;
    // std::cout << vec[1000000] << std::endl;
    // 범위 넣으면 소수 구해주는거? -> 배열로 하자     
    // vec[0] = 0;
    // vec[1] = 0;
    for (int i =0; i<10000001; ++i)
    {
        vec.push_back(i);
    }
    vec[0] = 0;
    vec[1] = 0;
    for(int i = 2; i<10000001; ++i) {
        // std::cout << i << " " << "\n";;
        if (vec[i] == 0)
            continue;
        for (int j = i+i; j<10000001; j = j+i)
        {
            // std::cout << j << std::endl;
            vec[j] = 0;
            // vec[j]
        }
    }
    // std::cout<< vec
    // int temp=0;
    for(int i = a; i<b+1; ++i) {
        // std::cout << vec[i] << std::endl;
        if(vec[i] != 0)
            std::cout << vec[i] << "\n";
    }
    // std::cout << temp << std::endl;
}