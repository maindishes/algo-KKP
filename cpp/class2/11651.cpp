#include <iostream>
#include <vector>
#include <algorithm>

bool scom(std::pair<int,int> &a, std::pair<int,int> &b) {
    if (a.second < b.second)
        return true;
    if (a.second > b.second)
        return false;
    if (a.second == b.second)
    {
        if (a.first > b.first)
            return false;
        else
            return true;
    }
    return true;
}
int main()
{
    int num;
    std::cin >> num;
    int a,b;
    std::vector<std::pair<int,int> > ivec;
    for(int i=0; i<num; ++i) {
        std::cin >> a >> b;
        ivec.push_back(std::make_pair(a,b));
    }
    // for (int i=0; i <num; ++i){
    //     std::cout << ivec[i].first <<" " << ivec[i].second << "\n";
    // }
    
    // std::cout << "------------" << std::endl;
    sort(ivec.begin(), ivec.end(), scom);
    for (int i=0; i <num; ++i){
        std::cout << ivec[i].first <<" " << ivec[i].second << "\n";
    }
    
}