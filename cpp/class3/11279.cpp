/*
* 절댓값 힙
* 11279
* 2023 2 25
18
1
-1
0
0
0
1
1
-1
-1
2
-2
0
0
0
0
0
0
0
*/


#include <queue>
#include <iostream>
#include <math.h>

struct scom {
    bool operator()(const int& a, const int& b) const {
        if (std::abs(a) > std::abs(b))
            return true;
        if (std::abs(a) == std::abs(b))
        {
            return a > b;
        }
        return false;   
    }
};

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int inum;
    std::cin >> inum;
    // std::priority_queue<int, std::vector<int>, std::greater<int> > pq;
    // std::priority_queue<int,std::vector<int>, std::less<int> > pq;
    std::priority_queue<int,std::vector<int>, scom > pq;
    int temp;

    for(int i=0; i<inum; ++i) {
        std::cin >> temp;
        if( temp != 0)
            pq.push(temp);
        else
        {
            if(pq.size() == 0)
                std::cout << 0 << "\n";
            else {
                std::cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}