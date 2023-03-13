/**
 * 경로찾기
 * 2023 3 11
7
0 0 0 1 0 0 0
0 0 0 0 0 0 1
0 0 0 0 0 0 0
0 0 0 0 1 1 0
1 0 0 0 0 0 0
0 0 0 0 0 0 1
0 0 1 0 0 0 0
*/

#include<vector>
#include <iostream>
#include <queue>
#include <cstring>

int main() {
    int inum;
    std::cin >> inum;
    int box[101][101] = {0,0};
    // int visit[1001] ={0};
    std::vector<std::vector<int> > ivec(inum+1);
    // std::queue<int> Q;
    int temp;
    for(int i =0; i< inum; ++i)
    {
        for(int j=0; j<inum; ++j)
        {
            std::cin >> temp;
            box[i][j] = temp;
            if(box[i][j] == 1) {
                ivec[i].push_back(j);
                // Q.push(i);
            }
        }
    }
    for(int i =0; i< inum; ++i)
    {
        std::queue<int> Q;
        int visit[1001] ={0};
        for(int k =0; k< inum; ++k)
        {
            if(box[i][k] != 1)
                continue;
        // memset(visit,0,sizeof(visit));
        Q.push(k);
        visit[k] = 1;
        while(!Q.empty())
        {
            int cur = Q.front();
            Q.pop();
            for(int i =0; i<ivec[cur].size(); ++i)
            {
                int next = ivec[cur][i];
                if(visit[next] == 1)
                    continue;
                Q.push(next);
                visit[next] = 1;
            }
        }
    }
    for (int j = 0; j < inum; j++)
            std::cout << visit[j] << " ";
        std::cout << "\n";
    }
}