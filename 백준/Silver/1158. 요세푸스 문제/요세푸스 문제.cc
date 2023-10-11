/*
7 3

---

<3, 6, 2, 7, 5, 1, 4>

*/
#include <iostream>
#include <vector>
#include <map>
#include <deque>
int main() {
    int inum1;
    int inum2;
    std::cin >> inum1 >> inum2;
    std::deque<int> Q;
    std::vector<int> A;
    for(int i = 0; i< inum1; ++i) {
        Q.push_back(i+1);
    }
    // [1 2 3 4 5 6 7]
    while(!Q.empty())
    {
        for(int i = 0; i< inum2-1; ++i) {
            int temp;
            temp = Q.front();
            Q.pop_front();
            Q.push_back(temp);
        }
        A.push_back(Q.front());
        Q.pop_front();
    }
    std::cout << "<";
    for(int i =0; i<A.size(); ++i) {
        if(i == A.size() -1)
            std::cout << A[i];
        else
            std::cout << A[i] << ", ";
        
    }
    std::cout << ">" << std::endl;
}