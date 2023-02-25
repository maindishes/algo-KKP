/**
 * 케빈 베이컨의 6단계 법칙
 * 2023 - 02 - 20
 입력:
5 5
1 3
1 4
4 5
4 3
3 2
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>


int main() {
    int n,m;
    std::cin >> n >> m;

    std::vector<std::vector<int> > table(n+1);
    int v1,v2;
    for(int i=0;i<m; ++i) {
        std::cin >> v1 >> v2;
        table[v1].push_back(v2);
        table[v2].push_back(v1);
    }
    std::vector<int> temp;
    std::vector<std::pair<int,int> > an;
    int min=21323837;
    for (int id = 1; id<=n; ++id) {
        std::queue<int> Q;
        std::vector<int> visit(n+1,0);
        // std::cout << id << std::endl;
        Q.push(id);
        visit[id] = 0;
        int count=0;
        while(!Q.empty()) {
            int cur = Q.front();
            Q.pop();
            // int cnt = 0;
            // std::cout << "cur : " << cur << std::endl;
            for(int i=0; i< table[cur].size(); ++i) {
                int next = table[cur][i];
                if(visit[next] != 0)
                    continue;
                // ++cnt;
                Q.push(next);
                // std::cout << "check : " << next << std::endl;
                visit[next] = visit[cur] + 1;
            }
            // std::cout << "cnt : " << cnt << "\n" << "count : " << count << "\n";
            // temp.push_back(cnt);
        }
        // min = std::min(count,min);
        // std::cout << min << std::endl;
        // std::cout << "temp : ";
        std::pair<int,int> temp_sum;
        for(int i=1; i<visit.size(); ++i)
        {
            if (i == id)
            {
                temp_sum.second = i;
                continue;
            }
            // std::cout << visit[i] << " ";
            temp_sum.first += visit[i];
        }
        an.push_back(temp_sum);
        // std::cout << std::endl; 
        visit.clear();
    }
    sort(an.begin(),an.end());
    std::cout << an[0].second << std::endl;
}