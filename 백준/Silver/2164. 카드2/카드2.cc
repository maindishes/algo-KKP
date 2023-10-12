#include <iostream>
#include <vector>
#include <deque>

int sol(std::deque<int> &a) {
    int temp;
    while(a.size() > 1)
    {
        a.pop_front();
        temp = a.front();
        a.pop_front();
        a.push_back(temp);
    }
    return a[0];
}
int main() {
    int inum;
    std::cin >> inum;
    std::vector<int> vec;
    std::deque<int> deq;
    for(int i =0; i<inum; ++i) {
        deq.push_back(i+1);
    }
    std::cout << sol(deq) << std::endl;
}