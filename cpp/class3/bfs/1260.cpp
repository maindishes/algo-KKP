/*
* DFS와 BFS
* 2023 - 2 - 19
입력 
4 5 1
1 2
1 3
1 4
2 4
3 4
*/
#include <stack> 
#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
void BFS(std::vector<std::vector<int> > &grap, std::vector<bool> &visit,int start);
void DFS(std::vector<std::vector<int> > &grap, std::vector<bool> &visit,int start);
int main() {
    int n,m,start;
    std::cin >> n >> m >> start;
    // [ [for index] [1인 얘들이 방문할 2번재 인자] [ 2번째 인자가 방문할 첫번째 인자 ] [] []  ] 인데 index를 맞추기 위해 + 1 을 해준것.  
    // 양방향 이기때문에 
    std::vector<std::vector<int> > grap(n+1);
    // std::cout << grap[0][0] << std::endl;
    for (int i = 0 ; i< m; ++i)
    {
        int v1, v2;
        std::cin >> v1 >> v2;
        // 양뱡향 이기 때문에
        grap[v1].push_back(v2);
        grap[v2].push_back(v1);
    }

    for(int i = 1; i<n; ++i)
    {
        sort(grap[i].begin(),grap[i].end());
    }


    std::vector<bool> dfs_visit(n+1);
    dfs_visit[start] = true;
    DFS(grap,dfs_visit,start);
    
    std::vector<bool> bfs_visit(n+1);
    bfs_visit[start] = true;
    BFS(grap,bfs_visit,start);
}

void BFS(std::vector<std::vector<int> > &grap, std::vector<bool> &visit,int start)
{
    // std::vector<int> visit(n+1);
    std::queue<int> Q;
    Q.push(start);
    visit[start]= true;

    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        std::cout << cur << " ";
        for(int i =0; i < grap[cur].size(); ++i) {
            int next = grap[cur][i];
            if(visit[next] == false) {
                Q.push(next);
                visit[next] = true;
            }
        }
    }
    std::cout << "\n";
}

void DFS(std::vector<std::vector<int> > &grap, std::vector<bool> &visit,int start)
{
    std::stack<int> S;
    S.push(start);
    visit[start]= true;

    while(!S.empty())
    {
        int cur = S.top();
        S.pop();
        std::cout << cur << " ";
        for(int i =0; i < grap[cur].size(); ++i) {
            int next = grap[cur][i];
            if(visit[next] == false) {
                S.push(next);
                visit[next] = true;
            }
        }
    }
    std::cout << "\n";
}