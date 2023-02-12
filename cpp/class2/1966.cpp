#include <queue>
#include <vector>
#include <iostream>
// #include <pair>

int sol(std::deque<std::pair<int,int> > &iq) {
    while(!iq.empty()) {
        

    }
}

int main() {
    int inum;
    std::cin >> inum;
    std::deque<std::pair<int, int> > iq;
    int a,b;
    int temp;
    for(int i=0; i<inum; ++i) {
        std::cin >> a >> b;
        iq.clear();
        for(int j =0; j< a; ++j) {
            std::cin >> temp;
            iq.push_back(std::make_pair(temp, j));
        }
    }
}