/**
 * 바이러스
 * 2023 2 25
 * #2606
입력
7
6
1 2
2 3
1 5
5 2
5 6
4 7
*/

#include <iostream>
#include <vector>
#include <queue>

int main()
{
    int n,m;
    std::cin >> n >>  m;
    std::vector<std::vector<int> > ivec(n+1);
    int a,b;
    for(int i =0; i<m; ++i) {
        std::cin >> a >> b;
        ivec[a].push_back(b);
        ivec[b].push_back(a);
    }

    std::vector<int> visit(n+1,0);
    // std::cout << visit[0]<< std::endl;
    std::queue<int> Q;
    Q.push(1);
    visit[1] = 1;
    int cnt = 0;
    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        ++cnt;
        // std::cout << cur << std::endl;
        for(int i =0; i<ivec[cur].size(); ++i)
        {
            int next = ivec[cur][i];
            if(visit[next] != 0)
                continue;
            Q.push(next);
            visit[next] = 1;
        }
    }
    std::cout << cnt - 1<< std::endl;
}