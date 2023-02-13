#include <queue>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
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
        std::deque<std::pair<int, int> > oiq(iq.begin(),iq.end());
        sort(iq.begin(),iq.end(),std::greater<std::pair<int,int> >());
        
        std::pair<int, int> temp;
        int count=0;
        while(oiq.size() != 0) {
            if(oiq.front().first != iq.front().first) {
                oiq.push_back(oiq.front());
                oiq.pop_front();
            }
            else if(oiq.front().first == iq.front().first) {
                ++count;
                if(oiq.front().second == b) {
                    oiq.pop_front();
                    iq.pop_front();
                    break;
                }
                else if(oiq.front().second != b) {
                    oiq.pop_front();
                    iq.pop_front();
                }
            }
        }
        std::cout << count << std::endl;
    }
}