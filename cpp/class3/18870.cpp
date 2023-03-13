/**
 * 좌표압축
 * 2023 3 13
5
2 4 -10 4 -9
*/


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
int main() {
    int inum;
    std::cin >> inum;
    int temp;
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    // 그것 밖에 없지 않나 자기 자신 순번을 제외 하고 나보다 큰지 작은지 카운트 해서 map의 값으로 넣어주는법. 
    // -10 -9 2 4 4 
    std::map<int,int> imap;
    std::vector<int> ivec;
    int inum_b = inum;
    std::set<int> iset;
    while(inum--)
    {
        std::cin >> temp;
        ivec.push_back(temp);
        iset.insert(temp);
    }
    // std::vector<int> ivec_b(ivec);
    // sort(ivec.begin(),ivec.end());
    // for(int i =0; i<; ++i)
    // {
    //     imap[ivec[i]] = -1;
    // }
    int value;
    // int tv = ivec[0];
    // imap[tv] = 0;
    // std::cout << *iset.begin() << std::endl;
    // std::set<int>
    int k =0;
    for(std::set<int>::iterator it = iset.begin(); it!= iset.end(); ++it)
    {
        // tv = ivec[i]; 
        // if(tv == ivec[i]  || ivec[i] != -1)
        //     continue;
        // tv = ivec[i];
        
        imap[*it] = k;
        ++k;
    }
    // for(int i = 0; i<inum_b; ++i)
    // {
    //     value = 0;
    //     if(imap[ivec[i]] != -1)
    //         continue;
    //     for(int j = 0; j<inum_b; ++j)
    //     {
    //         if (i == j)
    //             continue;
    //         if(ivec[i] > ivec[j])
    //         {
    //             ++value;
    //         }
    //     }
    //     imap[ivec[i]] = value;
    // }
    for(auto ka : ivec)
    {
        // std::cout << ka << std::endl;
        std::cout << imap[ka] << " ";
    }
}