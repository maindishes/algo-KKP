/**
 * 1978
 * 소수 찾기
 * 2023-2-8
*/
#include <iostream>
#include <vector>

int main() {
    int num;
    std::cin >> num;
    int temp;
    std::vector<int> tv;
    std::vector<int> sv;
    for(int i =0; i<1001; ++i)
    {
        sv.push_back(i);
    }
    sv[0] = 0;
    sv[1] = 0;
    for(int i =2; i<1001; ++i) {
        if(sv[i] == 0)
            continue;
        for(int j=i+i; j<1001; j = j+i)
            sv[j]=0;
    }
    for(int i=0; i<num; ++i)
    {
        std::cin >> temp;
        tv.push_back(temp);
    }
    int an=0;
    for(int i =0; i<num; ++i)
    {
        if(sv[tv[i]] != 0)
            an+=1;
    }
    std::cout << an << std::endl;

}