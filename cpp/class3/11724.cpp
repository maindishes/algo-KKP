/**
 * 연결 요소의 개수
6 5
1 2
2 5
5 1
3 4
4 6
*/

#include <queue>
#include <vector>
#include <iostream>

int main() {
    int a,b;
    std::cin >> a >> b;
    int c,d;
    std::vector<std::vector<int> > iv(a+1);
    for(int i =1; i< b+1; ++i) {
        std::cin >> c >> d;
        iv[c].push_back(d);
        iv[d].push_back(c);
    }
    // std::cout << iv[1].at(0) << std::endl;

    // int visit[a+1];
    std::vector<int> visit(a+1,0);
    visit[0] = 1;
    std::queue<int> Q;

    int cnt=0;
    for(int idx = 1; idx < a+1; ++idx) {
    // std::cout << visit[idx] << std::endl;
    if( visit[idx] == 1)
        continue;
    // std::cout << "idx : " << idx << std::endl;
    ++cnt;
    Q.push(idx);
    visit[idx] = 1;
    while(!Q.empty())
    {
        int cur = Q.front();
        // std::cout << "cur : " << cur << std::endl;
        Q.pop();
        for(int i =0; i<iv[cur].size(); ++i)
        {
            int nx = iv[cur][i];
            if(visit[nx] == 1)
                continue;
            Q.push(nx);
            visit[nx] =1;
        }
    }
    }
    std::cout << cnt << std::endl;
}

