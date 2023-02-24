/*
* 최소 힙
* 1927
* 2023 2 24
9
0
12345678
1
2
0
0
0
0
32
*/


#include <queue>
#include <iostream>
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int inum;
    std::cin >> inum;
    std::priority_queue<int, std::vector<int>, std::greater<int> > pq;
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