/**
 * 리모컨
 * 2023 - 02 - 17
 * 입력:
5457
3
6 7 8
*/
#include <iostream>
#include <vector>

int main()
{
    std::string target_s;
    std::cin >> target_s;
    int target = std::stoi(target_s);
    int inum;
    std::cin >> inum;
    int temp;
    std::vector<int> black;
    for(int i=0; i<inum; ++i) {
        std::cin >> temp;
        black.push_back(temp);
    }
    std::vector<int> soso;
    for (int i =0; i<10;++i) {
        soso.push_back(i);
        for(int k = 0; k<inum; ++k) {
            if(black[k] == i)
                soso.pop_back();
        }
    }

    // for(int i =0; i<soso.size(); ++i) {
    //     std::cout << soso[i] << " ";
    // }
    // std::cout << std::endl;

    for(int i=0; i< target_s.length(); ++i) {
        // std::cout << target_s[i] << std::endl;
        if(target_s[i] )
    }

    
}

