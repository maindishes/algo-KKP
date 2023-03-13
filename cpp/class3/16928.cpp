/**
 * 포기하면 변명거리를 찾고 할수있다 생각하면 방법을 찾는다. 
 * 뱀과 사다리 게임
 * 2023 3 11
3 7
32 62
42 68
12 98
95 13
97 25
93 37
79 27
75 19
49 47
67 17
*/

#include <queue>
#include <iostream>
#include <vector>



int main() {
    int a,b;
    std::cin >> a >> b;

    std::vector<int> box(101);
    for(int i=0; i< 101; ++i)
    {
        box[i] = i;
    }
    int tempa;
    int tempb;
    for(int i =0; i<a+b; ++i)
    {
        std::cin >> tempa >> tempb;
        box[tempa]= tempb;
    }

    // for(auto k : box)
    // {
    //     std::cout << k << " ";
    // }
    // std::cout << std::endl;

    std::queue<int> Q;
    std::vector<int> visit(101,0);
    std::vector<int> dist(101,-1);
    Q.push(1);
    visit[1] = 1;
    dist[1] = 0;
    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        for(int idx =1; idx < 7; ++idx)
        {
            int next =cur + idx;
            if(next > 100 )
                continue;
            next = box[next];
            if(dist[next] != -1)
                continue;
            dist[next] = dist[cur] + 1;
            Q.push(next);
        }
    }

    std::cout << dist[100] << std::endl;
}