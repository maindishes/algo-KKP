// 5
// 5
// 4
// 3
// 2
// 1


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
int main() {
    int inum;
    std::cin >> inum;
    std::vector<int> ivec;
    std::priority_queue<int, std::vector<int>, std::greater<int> > iq;
    // std::priority_queue<int,> iq;
    int temp;
    for(int i=0; i< inum; ++i) {
        std::cin >> temp;
        iq.push(temp);
    }

  // Printing all elements in the priority queue
    while (!iq.empty()) {
        std::cout << iq.top() << "\n";
        iq.pop();
  }
}