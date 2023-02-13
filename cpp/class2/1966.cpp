#include <queue>
#include <vector>
#include <iostream>
#include <set>
// #include <pair>

// int sol(std::deque<std::pair<int,int> > &iq) {
//     while(!iq.empty()) {
        

//     }
// }

int main() {
    int inum;
    std::cin >> inum;
    std::deque<std::pair<int, int> > iq;
    std::set<int, std::greater<int> > iset;
    int a,b;
    int temp;
    for(int i=0; i<inum; ++i) {
        std::cin >> a >> b;
        iq.clear();
        for(int j =0; j< a; ++j) {
            std::cin >> temp;
            iq.push_back(std::make_pair(temp, j));
            iset.insert(temp);
        }
        // std::deque<std::
        // for (auto k : iset) {
        //     std::cout << k << std::endl;
        // }
        sort(iq.begin(),iq.end(),std::greater<std::pair<int,int> >());
        for(int k=0;k<iq.size()-1; ++k) {
            std::cout << iq[k].first << " : " << iq[k].second << std::endl;
            if(iq[k].second == b) {
                std::cout << k << std::endl;
            }
        }
    }
}